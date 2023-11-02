
@protocol NFDigitalCarKeySessionDelegate <NSObject>

@optional

- (void)session:(NFDigitalCarKeySession *)arg1 didEndTransaction:(NFDigitalCarKeyEndEvent *)arg2;
- (void)session:(NFDigitalCarKeySession *)arg1 didEnterFieldWithNotification:(NFFieldNotification *)arg2;
- (void)session:(NFDigitalCarKeySession *)arg1 didExpireTransactionForApplet:(NFApplet *)arg2;
- (void)session:(NFDigitalCarKeySession *)arg1 didExpressModeStateChange:(unsigned int)arg2 withObject:(NSString *)arg3;
- (void)session:(NFDigitalCarKeySession *)arg1 didSelectApplet:(NFApplet *)arg2;
- (void)session:(NFDigitalCarKeySession *)arg1 didStartTransaction:(NFDigitalCarKeyStartEvent *)arg2;
- (void)session:(NFDigitalCarKeySession *)arg1 event:(NSDictionary *)arg2;
- (void)sessionDidEndUnexpectedly:(NFDigitalCarKeySession *)arg1;
- (void)sessionDidExitField:(NFDigitalCarKeySession *)arg1;
- (void)sessionDidFailDeferredAuthorization:(NFDigitalCarKeySession *)arg1;
- (void)sessionDidReceiveActivityTimeout:(NFDigitalCarKeySession *)arg1 result:(NSString *)arg2;
- (void)sessionRequestAuthorization:(NFDigitalCarKeySession *)arg1;

@end
