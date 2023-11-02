
@protocol RecommendationFlowControllerDelegate <NSObject>

@required

- (void)userDidCancelAction;
- (void)userDidCompleteAction:(NSNumber *)arg1;

@end
