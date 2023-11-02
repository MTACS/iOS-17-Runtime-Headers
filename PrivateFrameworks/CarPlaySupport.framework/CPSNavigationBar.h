
@interface CPSNavigationBar : UINavigationBar <CPSLinearFocusProviding> {
    NSMapTable * _lastFocusedItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *lastFocusedItems;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useRightHandDriveFocusGuide;

- (void).cxx_destruct;
- (id)_linearFocusItems;
- (void)didMoveToSuperview;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)lastFocusedItems;
- (id)popNavigationItemAnimated:(bool)arg1;
- (id)preferredFocusEnvironments;
- (void)setLastFocusedItems:(id)arg1;

@end
