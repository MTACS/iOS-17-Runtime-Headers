
@protocol NFUnifiedAccessSessionDelegate <NSObject>

@optional

- (void)unifiedAccessSession:(NFUnifiedAccessSession *)arg1 didDetectField:(bool)arg2;
- (void)unifiedAccessSession:(NFUnifiedAccessSession *)arg1 didEndTransaction:(NFContactlessPaymentEndEvent *)arg2;
- (void)unifiedAccessSession:(NFUnifiedAccessSession *)arg1 didEnterFieldWithNotification:(NFFieldNotification *)arg2;
- (void)unifiedAccessSession:(NFUnifiedAccessSession *)arg1 didExpireTransactionForApplet:(NFApplet *)arg2;
- (void)unifiedAccessSession:(NFUnifiedAccessSession *)arg1 didExpressModeStateChange:(unsigned int)arg2 withObject:(NSString *)arg3;
- (void)unifiedAccessSession:(NFUnifiedAccessSession *)arg1 didSelectApplet:(NFApplet *)arg2;
- (void)unifiedAccessSession:(NFUnifiedAccessSession *)arg1 didStartTransaction:(NFContactlessPaymentStartEvent *)arg2;
- (void)unifiedAccessSessionDidEndUnexpectedly:(NFUnifiedAccessSession *)arg1;
- (void)unifiedAccessSessionDidExitField:(NFUnifiedAccessSession *)arg1;

@end
