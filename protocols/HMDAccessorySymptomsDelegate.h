
@protocol HMDAccessorySymptomsDelegate <NSObject>

@required

- (void)symptomManager:(HMDSymptomManager *)arg1 didChangeSFDeviceIdentifier:(NSUUID *)arg2;
- (void)symptomManager:(HMDSymptomManager *)arg1 didChangeSymptoms:(NSSet *)arg2;

@end
