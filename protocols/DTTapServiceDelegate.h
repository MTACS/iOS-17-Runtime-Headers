
@protocol DTTapServiceDelegate

@required

+ (void)registerCapabilities:(DTXConnection *)arg1;

- (DTTapConfig *)createConfigWithPlist:(NSDictionary *)arg1;
- (void)didStop;
- (id)initWithMessageSender:(DTTapServiceMessageSender *)arg1;
- (bool)requiresExpiredPIDCacheForConfig:(DTTapConfig *)arg1;
- (DTTapMessage *)willStartWithConfig:(DTTapConfig *)arg1;

@end
