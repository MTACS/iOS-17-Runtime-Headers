
@interface PKPaletteViewInteraction : NSObject <PKPaletteHostingWindowScene, PKPaletteTapToRadarCommandDelegate, UIEditingOverlayInteractionWithView, UIInteraction, UIKeyboardSceneDelegateVisibilityObserver, _UISceneComponentProviding> {
    <PKPaletteViewInteractionDelegate> * _delegate;
    PKPaletteHostView * _paletteHostView;
    NSLayoutConstraint * _paletteHostViewHeightConstraint;
    NSLayoutConstraint * _paletteHostViewLeftConstraint;
    NSLayoutConstraint * _paletteHostViewTopConstraint;
    NSLayoutConstraint * _paletteHostViewWidthConstraint;
    PKDrawingPaletteView * _paletteView;
    UIScene * _scene;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sceneBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _textEffectsWindowFrame;
    UIView * _view;
    UIWindowScene * _windowScene;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (getter=isActive, nonatomic, readonly) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaletteViewInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPaletteHostView *paletteHostView;
@property (nonatomic, retain) NSLayoutConstraint *paletteHostViewHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *paletteHostViewLeftConstraint;
@property (nonatomic, retain) NSLayoutConstraint *paletteHostViewTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *paletteHostViewWidthConstraint;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } paletteHostingWindowSceneBounds;
@property (nonatomic, retain) PKDrawingPaletteView *paletteView;
@property (getter=isPaletteVisible, nonatomic, readonly) bool paletteVisible;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sceneBounds;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } textEffectsWindowFrame;
@property (nonatomic) UIView *view;
@property (nonatomic) UIWindowScene *windowScene;

+ (id)existingPaletteViewInteractionForWindowScene:(id)arg1;
+ (bool)isHostedWindow:(id)arg1;
+ (id)paletteViewInteractionForCanvas:(id)arg1;
+ (id)paletteViewInteractionForWindow:(id)arg1 windowScene:(id)arg2;

- (void).cxx_destruct;
- (bool)_isCompactHostedWindow;
- (id)_scene;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sceneBoundsForUpdateWithFollowsHostingWindowOut:(bool*)arg1;
- (void)_sceneDidActivateNotification:(id)arg1;
- (void)_sceneWillEnterForegroundNotification:(id)arg1;
- (void)_sceneWillInvalidate:(id)arg1;
- (void)_setPaletteVisible:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_setScene:(id)arg1;
- (bool)_shouldDeferPaletteVisibilityUpdate;
- (id)_traitCollectionForHostingWindow;
- (void)_updateForRotation:(id)arg1;
- (void)_updateForWillRotate:(id)arg1;
- (void)_updatePaletteTraitCollection:(id)arg1;
- (void)_updatePaletteUserInterfaceStyle:(long long)arg1;
- (void)_updateSceneBounds;
- (void)_updateUIWithSceneBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_viewControllerForPalette;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (void)editingOverlayContainerDidChangeToSceneBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)hidePaletteViewAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)hostingWindow;
- (id)initWithScene:(id)arg1;
- (id)initWithWindowSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isActive;
- (bool)isPaletteVisible;
- (void)keyboardSceneDelegate:(id)arg1 inputViewSetVisibilityDidChange:(bool)arg2 includedReset:(bool)arg3;
- (id)paletteHostView;
- (id)paletteHostViewHeightConstraint;
- (id)paletteHostViewLeftConstraint;
- (id)paletteHostViewTopConstraint;
- (id)paletteHostViewWidthConstraint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paletteHostingWindowSceneBounds;
- (id)paletteTapToRadarCommandConfiguration:(id)arg1;
- (id)paletteView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sceneBounds;
- (void)setDelegate:(id)arg1;
- (void)setPaletteHostView:(id)arg1;
- (void)setPaletteHostViewHeightConstraint:(id)arg1;
- (void)setPaletteHostViewLeftConstraint:(id)arg1;
- (void)setPaletteHostViewTopConstraint:(id)arg1;
- (void)setPaletteHostViewWidthConstraint:(id)arg1;
- (void)setPaletteView:(id)arg1;
- (void)setSceneBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTextEffectsWindowFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setView:(id)arg1;
- (void)setWindowScene:(id)arg1;
- (void)showPaletteViewAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textEffectsWindowFrame;
- (id)view;
- (void)willMoveToView:(id)arg1;
- (id)windowScene;

@end
