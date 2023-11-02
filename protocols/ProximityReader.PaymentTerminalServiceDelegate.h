
@protocol ProximityReader.PaymentTerminalServiceDelegate

@required

- (void)closed:(bool)arg1;
- (void)loading:(long long)arg1;
- (void)readFeedback:(long long)arg1;

@end
