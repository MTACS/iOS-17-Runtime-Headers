
@interface CKContextContentProviderUIScene : CKContextContentProvider <_UISceneComponentProviding> {
    UIScene * __scene;
    bool  _allowAppSwitcherControls;
    UIButton * _debugButton;
    UIButton * _recentsButton;
    NSTimer * _toolInstallationTimer;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_UIElementsForWebViewContentString:(id)arg1;
+ (id)_allViewControllersFromUIViews:(id)arg1;
+ (id)_bestContentStringForWebViewUIElements:(id)arg1 andTitle:(id)arg2;
+ (id)_bestVisibleStringForView:(id)arg1 usingExecutor:(id)arg2;
+ (void)_descendantsRelevantForContentExtractionFromView:(id)arg1 intoArray:(id)arg2;
+ (id)_descendantsRelevantForContentExtractionFromWindow:(id)arg1;
+ (void)_donateContentsOfWindow:(id)arg1 usingExecutor:(id)arg2 withOptions:(unsigned long long)arg3;
+ (void)_donateText:(id)arg1 withTitle:(id)arg2 debugText:(id)arg3 debugUrlString:(id)arg4 rawHTML:(id)arg5 leadImage:(id)arg6 snapshot:(id)arg7 uiElements:(id)arg8 extractionItems:(id)arg9 usingContextFromExecutor:(id)arg10;
+ (void)_extractContentFromWebView:(id)arg1 includingSnapshot:(bool)arg2 includingUIBoundingBox:(bool)arg3 ignoreViewTextLengthRequirements:(bool)arg4 ignoreViewCountCap:(bool)arg5 includeRawHTML:(bool)arg6 withCompletionHandler:(id /* block */)arg7;
+ (id)_extractItemsFromViewControllers:(id)arg1;
+ (id)_firstAvailableUIViewControllerForUIView:(id)arg1;
+ (double)_fontSizeOfView:(id)arg1 usingExecutor:(id)arg2;
+ (id)_getNotableSuperviewClassNamesForView:(id)arg1;
+ (id)_handleWKWebView:(id)arg1 withExecutor:(id)arg2;
+ (bool)_isRelevantForExtractionWithView:(id)arg1;
+ (bool)_isSensitiveTextContentType:(id)arg1;
+ (void)extractFromScene:(id)arg1 usingExecutor:(id)arg2 withOptions:(unsigned long long)arg3;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_containerViewForDebugButtons;
- (id)_descendantsRelevantForDebugControls:(id)arg1;
- (bool)_determineIfDebuggingControlsShouldBeAllowed;
- (void)_didSelectDebugControl:(id)arg1;
- (void)_didSelectRecentsControl:(id)arg1;
- (void)_installDebuggingButton;
- (void)_installDebuggingControlsIfApplicable;
- (void)_installRecentsButton;
- (id)_scene;
- (void)_sceneWillInvalidate:(id)arg1;
- (void)_setScene:(id)arg1;
- (void)_setUpDebuggingControlsIfPossibleAfterDelay:(double)arg1;
- (bool)_shouldInstallAppSwitcherControls;
- (void)extractUsingExecutor:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)initWithScene:(id)arg1;

@end
