
@protocol NFHardwareEventListener <NSObject>

@optional

- (void)didChangeRadioState:(bool)arg1;
- (void)didReceiveFatalCommunicationError;
- (void)hardwareStateDidChange;
- (void)secureElement:(NFSecureElement *)arg1 didChangeRestrictedMode:(bool)arg2;
- (void)temperatureChanged:(double)arg1;

@end
