
@protocol FASettingPresetsCacheProtocol <NSObject>

@required

- (AAFPromise *)loadForURL:(NSURL *)arg1;
- (AAFPromise *)updateWithPresets:(NSArray *)arg1 requestURL:(NSURL *)arg2;

@end
