
@interface _UIFindNavigatorHarness : NSObject <_UIFindNavigatorHosting, _UIFindNavigatorViewControllerDelegate, _UIGeometryChangeObserver> {
    _UIFindNavigatorViewController * _findNavigatorViewController;
    UIScrollView * _hostScrollView;
    UIView * _hostView;
    UIView * _interactionView;
    bool  _interactionViewIsWebView;
    bool  _isHoistingFindNavigator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _UIFindNavigatorViewController *findNavigatorViewController;
@property (getter=isFindNavigatorVisible, nonatomic, readonly) bool findNavigatorVisible;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIScrollView *hostScrollView;
@property (nonatomic) UIView *hostView;
@property (nonatomic) UIView *interactionView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_adjustHostViewScrollOffsetToTopIfSupported;
- (id)_findNavigatorView;
- (void)_geometryChanged:(const struct { int x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CATransform3D { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; double x_6_1_6; double x_6_1_7; double x_6_1_8; double x_6_1_9; double x_6_1_10; double x_6_1_11; double x_6_1_12; double x_6_1_13; double x_6_1_14; double x_6_1_15; double x_6_1_16; } x6; id x7; id x8; id x9; id x10; }*)arg1 forAncestor:(id)arg2;
- (void)_layoutFindNavigator;
- (void)_sendPlacementUpdate;
- (bool)_shouldAdjustHostViewContentOffsets;
- (void)beginHoistingFindNavigator:(bool)arg1;
- (void)dealloc;
- (void)dismissFindNavigatorEndingActiveSession:(bool)arg1;
- (void)endHoistingFindNavigator:(bool)arg1;
- (void)endHoistingFindNavigator:(bool)arg1 endingActiveSession:(bool)arg2;
- (bool)findNavigatorShouldDismissOnResponderChange:(id)arg1;
- (id)findNavigatorViewController;
- (void)findNavigatorViewControllerDidRequestDismissal:(id)arg1;
- (void)findNavigatorViewControllerViewDidChangeIntrinsicContentSize:(id)arg1;
- (id)hostScrollView;
- (id)hostView;
- (id)init;
- (id)interactionView;
- (bool)isFindNavigatorVisible;
- (void)presentFindNavigatorWithFindSession:(id)arg1 showingReplace:(bool)arg2;
- (void)setFindNavigatorViewController:(id)arg1;
- (void)setHostScrollView:(id)arg1;
- (void)setHostView:(id)arg1;
- (void)setInteractionView:(id)arg1;

@end
