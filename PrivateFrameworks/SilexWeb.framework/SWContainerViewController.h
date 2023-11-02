
@interface SWContainerViewController : UIViewController {
    <SWActionProvider> * _actionProvider;
    SWContainerConfiguration * _configuration;
    <SWConfigurationManager> * _configurationManager;
    SWDeveloperSettings * _developerSettings;
    <SWErrorProvider> * _errorProvider;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inputAccessoryViewFrame;
    <SWInteractionProvider> * _interactionProvider;
    bool  _isKeyboardVisible;
    bool  _isTransitioning;
    <UICoordinateSpace> * _keyboardCoordinateSpace;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    <SWPresentationManager> * _presentationManager;
    <SWScaleManager> * _scaleManager;
    <SWSnapshotManager> * _snapshotManager;
    SWViewController * _webContentViewController;
}

@property (nonatomic, readonly) <SWActionProvider> *actionProvider;
@property (nonatomic, copy) SWContainerConfiguration *configuration;
@property (nonatomic, readonly) <SWConfigurationManager> *configurationManager;
@property (nonatomic, retain) SWDeveloperSettings *developerSettings;
@property (nonatomic, readonly) <SWErrorProvider> *errorProvider;
@property (nonatomic) bool focusShouldStartInputSession;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inputAccessoryViewFrame;
@property (nonatomic, readonly) <SWInteractionProvider> *interactionProvider;
@property (nonatomic) bool isKeyboardVisible;
@property (nonatomic) bool isTransitioning;
@property (nonatomic, retain) <UICoordinateSpace> *keyboardCoordinateSpace;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardFrame;
@property (nonatomic, readonly) NSURL *loadedURL;
@property (nonatomic, readonly) <SWMessageHandlerManager> *messageHandlerManager;
@property (nonatomic, readonly) <SWPresentationManager> *presentationManager;
@property (nonatomic, readonly) <SWScaleManager> *scaleManager;
@property (nonatomic, readonly) <SWSnapshotManager> *snapshotManager;
@property (nonatomic, readonly) SWViewController *webContentViewController;

- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)actionProvider;
- (bool)allowUserInteractionForInteractionType:(unsigned long long)arg1;
- (id)configuration;
- (id)configurationManager;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertedInputAccessoryViewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertedKeyboardFrame;
- (id)developerSettings;
- (id)errorProvider;
- (bool)focusShouldStartInputSession;
- (void)handleKeyboardChange:(id)arg1;
- (void)handleKeyboardHide:(id)arg1;
- (void)handleKeyboardShow:(id)arg1;
- (id)initWithWebContentViewController:(id)arg1 actionProvider:(id)arg2 interactionProvider:(id)arg3 errorProvider:(id)arg4 configurationManager:(id)arg5 presentationManager:(id)arg6 scaleManager:(id)arg7 snapshotManager:(id)arg8;
- (id)inputAccessoryView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputAccessoryViewFrame;
- (id)interactionProvider;
- (bool)isKeyboardVisible;
- (bool)isTransitioning;
- (id)keyboardCoordinateSpace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardFrame;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadLocalDatastore:(id)arg1 forceUpdate:(bool)arg2 completion:(id /* block */)arg3;
- (void)loadURL:(id)arg1;
- (id)loadedURL;
- (id)messageHandlerManager;
- (id)presentationManager;
- (void)prewarm;
- (void)removeMenusForIdentifiers:(id)arg1;
- (id)scaleManager;
- (void)setConfiguration:(id)arg1;
- (void)setDeveloperSettings:(id)arg1;
- (void)setFocusShouldStartInputSession:(bool)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputAccessoryViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsKeyboardVisible:(bool)arg1;
- (void)setIsTransitioning:(bool)arg1;
- (void)setKeyboardCoordinateSpace:(id)arg1;
- (void)setKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShortcutsBarWithLeadingGroups:(id)arg1 trailingGroups:(id)arg2;
- (void)setTextInputTraits:(id)arg1;
- (id)snapshotManager;
- (void)updateConfiguration;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)webContentViewController;

@end
