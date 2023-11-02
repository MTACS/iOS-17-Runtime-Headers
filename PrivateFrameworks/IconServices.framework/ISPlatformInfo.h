
@interface ISPlatformInfo : NSObject

@property (readonly) unsigned long long nativePlatform;

+ (id)sharedInstance;

- (unsigned long long)nativePlatform;
- (bool)supportsRequestingLayerStacksForPlatform:(unsigned long long)arg1;
- (bool)supportsRequestingMultisizedImagesForPlatform:(unsigned long long)arg1;

@end
