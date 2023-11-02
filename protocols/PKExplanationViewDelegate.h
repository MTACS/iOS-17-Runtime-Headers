
@protocol PKExplanationViewDelegate <NSObject>

@optional

- (void)explanationViewDidSelectBodyButton:(PKExplanationView *)arg1;
- (void)explanationViewDidSelectContinue:(PKExplanationView *)arg1;
- (void)explanationViewDidSelectSetupLater:(PKExplanationView *)arg1;
- (void)explanationViewDidUpdateLayout:(PKExplanationView *)arg1;

@end
