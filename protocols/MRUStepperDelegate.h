
@protocol MRUStepperDelegate <NSObject>

@required

- (void)stepperDidDecrement:(MRUStepper *)arg1;
- (void)stepperDidIncrement:(MRUStepper *)arg1;

@optional

- (void)stepperDecrementHoldBegan:(MRUStepper *)arg1;
- (void)stepperDecrementHoldEnded:(MRUStepper *)arg1;
- (void)stepperIncrementHoldBegan:(MRUStepper *)arg1;
- (void)stepperIncrementHoldEnded:(MRUStepper *)arg1;

@end
