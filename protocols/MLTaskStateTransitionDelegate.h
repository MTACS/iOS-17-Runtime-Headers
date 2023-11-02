
@protocol MLTaskStateTransitionDelegate <NSObject>

@required

- (void)onCancellation;
- (void)onCompletionWithTaskContext:(NSObject *)arg1;
- (void)onFailureWithTaskContext:(NSObject *)arg1;
- (void)onResumptionWithTaskContext:(NSObject *)arg1;
- (void)onSuspensionWithTaskContext:(NSObject *)arg1;

@end
