
@interface SBFailureNotifyingTapGestureRecognizer : UITapGestureRecognizer

@property (nonatomic) <SBFailureNotifyingTapGestureRecognizerDelegate> *delegate;

- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setState:(long long)arg1;

@end
