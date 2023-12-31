
@protocol CNTUCallProvider <NSObject>

@required

- (NSString *)bundleIdentifier;
- (<CNTUDialRequest> *)dialRequestForHandle:(CNHandle *)arg1 contact:(CNContact *)arg2 video:(bool)arg3;
- (NSString *)localizedName;
- (NSSet *)supportedHandleTypes;
- (bool)supportsAudio;
- (bool)supportsVideo;

@end
