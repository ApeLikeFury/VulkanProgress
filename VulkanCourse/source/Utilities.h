#pragma once

const std::vector<const char*> deviceExtensions = {
	VK_KHR_SWAPCHAIN_EXTENSION_NAME
};


// indices of queue families (if exist)
struct QueueFamilyIndices
{
	int graphicsFamily = -1;
	int presentationFamily = -1;

	//check if queue family is valid
	bool isValid()
	{
		return graphicsFamily >= 0 && presentationFamily >= 0;
	}

};

struct SwapChainDetails {
	VkSurfaceCapabilitiesKHR surfaceCapabilities;		// surface properties
	std::vector<VkSurfaceFormatKHR> formats;			// surface image formats eg RGBA
	std::vector<VkPresentModeKHR> presentationMode;		// how images should be presented to screen


};