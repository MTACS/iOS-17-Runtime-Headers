
@interface NewsFeed.FormatLayoutView : UIView <UIGestureRecognizerDelegate> {
    void customActions;
    void debugButton;
    void identifier;
    void isDirty;
    void loadAwareObservers;
    void motionObservers;
    void scrollObservers;
    void tapAction;
    void tapGesture;
    void token;
    void viewAnimations;
    void viewContainers;
    void viewControllers;
    void viewKey;
    void viewsByName;
}

@property (nonatomic, copy) NSArray *accessibilityCustomActions;
@property (nonatomic) bool isAccessibilityElement;

- (void).cxx_destruct;
- (id)accessibilityCustomActions;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAccessibilityCustomActions:(id)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;

@end
