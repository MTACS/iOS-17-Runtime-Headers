
@interface WebMIMETypeRegistry : NSObject

+ (bool)isSupportedImageMIMEType:(id)arg1;
+ (bool)isSupportedMediaMIMEType:(id)arg1;
+ (id)mimeTypeForExtension:(id)arg1;
+ (id)preferredExtensionForMIMEType:(id)arg1;

@end
