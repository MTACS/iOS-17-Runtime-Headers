
@interface DCDevice : NSObject

@property (getter=isSupported, readonly) bool supported;

+ (id)currentDevice;

- (bool)_isSupportedReturningError:(id*)arg1;
- (void)generateTokenWithCompletionHandler:(id /* block */)arg1;
- (bool)isSupported;

@end
