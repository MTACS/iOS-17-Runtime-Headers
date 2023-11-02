
@protocol NFHardwareManagerCallbacks <NSObject>

@required

- (void)didChangeRadioState:(bool)arg1;
- (void)hwStateDidChange:(unsigned int)arg1;
- (void)secureElementWithIdentifier:(NSString *)arg1 didChangeRestrictedMode:(bool)arg2;
- (void)temperatureChanged:(double)arg1;

@end
