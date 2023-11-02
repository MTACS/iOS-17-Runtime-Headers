
@protocol DDSTrialClient <NSObject>

@required

- (<DDSTrialClientDelegate> *)delegate;
- (void)setDelegate:(id <DDSTrialClientDelegate>)arg1;
- (void)start;

@end
