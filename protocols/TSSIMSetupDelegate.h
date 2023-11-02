
@protocol TSSIMSetupDelegate <NSObject>

@optional

- (void)receivedResponse;
- (void)simSetupFlowCompleted;
- (void)simSetupFlowCompleted:(unsigned long long)arg1;
- (void)waitForResponse:(UIViewController *)arg1;

@end
