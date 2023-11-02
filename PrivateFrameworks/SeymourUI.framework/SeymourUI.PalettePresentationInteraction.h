
@interface SeymourUI.PalettePresentationInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction, UIViewControllerTransitioningDelegate> {
    void delegate;
    void panGestureRecognizer;
    void presentedViewController;
    void tapGestureRecognizer;
    void view;
}

@property (nonatomic, retain) UIView *view;

- (void).cxx_destruct;
- (void)didMoveToView:(id)arg1;
- (id)init;
- (void)panGestureRecognized:(id)arg1;
- (void)setView:(id)arg1;
- (void)tapGestureRecognized:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
