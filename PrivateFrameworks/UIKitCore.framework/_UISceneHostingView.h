
@interface _UISceneHostingView : UIView <_UIGeometryChangeObserver, _UISceneHostingSettingsProviding> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _currentSafeAreaInsets;
    bool  _currentShouldUseHostCornerRadius;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentSize;
    UIColor * _currentTintColor;
    UITraitCollection * _currentTraitCollection;
    UILabel * _debugLabel;
    _UISceneHostingController * _sceneHostingController;
    <UIScenePresenter> * _scenePresenter;
}

@property (nonatomic, readonly) <UIScenePresenter> *_scenePresenter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyOverridesToHostedSceneSettings:(id)arg1;
- (void)_geometryChanged:(const struct { int x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CATransform3D { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; double x_6_1_6; double x_6_1_7; double x_6_1_8; double x_6_1_9; double x_6_1_10; double x_6_1_11; double x_6_1_12; double x_6_1_13; double x_6_1_14; double x_6_1_15; double x_6_1_16; } x6; id x7; id x8; id x9; id x10; }*)arg1 forAncestor:(id)arg2;
- (void)_prepareForWindowHostingSceneRemoval;
- (id)_scenePresenter;
- (bool)_shouldUseHostCornerRadius;
- (void)dealloc;
- (id)initWithSceneHostingController:(id)arg1;
- (void)layoutSubviews;
- (void)requestSceneSettingsUpdateIfNecessary;
- (void)setPresentedScene:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)windowDidMoveToScene:(id)arg1;

@end
