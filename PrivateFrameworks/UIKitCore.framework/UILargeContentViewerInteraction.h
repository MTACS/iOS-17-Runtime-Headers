
@interface UILargeContentViewerInteraction : NSObject <UIAccessibilityHUDGestureDelegateInternal, UIInteraction> {
    <UILargeContentViewerInteractionDelegate> * _delegate;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <UILargeContentViewerInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIGestureRecognizer *gestureRecognizerForExclusionRelationship;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

+ (void)initialize;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_itemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_viewControllerForAccessibilityHUDGestureManager:(id)arg1;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (id)gestureRecognizerForExclusionRelationship;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
