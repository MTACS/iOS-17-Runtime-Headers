
@protocol NTKClockHardwareInput <NSObject>

@required

- (bool)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2;
- (bool)_wheelChangedWithEvent:(UIEvent *)arg1;

@end
