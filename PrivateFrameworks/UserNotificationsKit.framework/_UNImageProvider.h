
@interface _UNImageProvider : NSObject

+ (id)_contactForImageRenderingFromContentURLWithContext:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)_contactsForImageRenderingFromRecipientsWithContext:(id)arg1 bundleIdentifier:(id)arg2 descriptorForRequiredKeys:(id)arg3;
+ (id)_imageDataFromFileSystemForContactURL:(id)arg1;
+ (id)_imageDataFromIntentsForContentURL:(id)arg1;
+ (id)generateEphemeralContactsForImageRenderingWithContext:(id)arg1 bundleIdentifier:(id)arg2 descriptorForRequiredKeys:(id)arg3;
+ (id)generateEphemeralContactsForImageRenderingWithContext:(id)arg1 descriptorForRequiredKeys:(id)arg2;
+ (id)imageDataForContentURL:(id)arg1;

@end
