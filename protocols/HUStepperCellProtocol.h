
@protocol HUStepperCellProtocol <NSObject>

@required

- (NSNumber *)maximumValue;
- (NSNumber *)minimumValue;
- (void)setMaximumValue:(NSNumber *)arg1;
- (void)setMinimumValue:(NSNumber *)arg1;
- (void)setStepValue:(NSNumber *)arg1;
- (void)setStepperCellDelegate:(id <HUStepperCellDelegate>)arg1;
- (void)setStepperValue:(NSNumber *)arg1;
- (NSNumber *)stepValue;
- (<HUStepperCellDelegate> *)stepperCellDelegate;
- (NSNumber *)stepperValue;

@end
