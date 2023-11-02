
@protocol BNPresentable <BNPresentableIdentifying, BNPresentableObserving>

@optional

- (void)draggingDidBeginWithGestureProxy:(id <BNPanGestureProxy>)arg1;
- (bool)isDraggingDismissalEnabled;
- (bool)isDraggingInteractionEnabled;
- (bool)isTouchOutsideDismissalEnabled;
- (long long)presentableBehavior;
- (<BNPresentableContext> *)presentableContext;
- (NSString *)presentableDescription;
- (long long)presentableType;
- (void)setPresentableContext:(id <BNPresentableContext>)arg1;
- (UIViewController *)viewController;

@end
