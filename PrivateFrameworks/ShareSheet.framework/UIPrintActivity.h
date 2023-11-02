
@interface UIPrintActivity : UIActivity <UIManagedConfigurationRestrictableActivity, UIPrintInteractionControllerActivityDelegate> {
    bool  _isContentManaged;
    UIPrintInteractionController * _printInteractionController;
    NSString * _sourceApplicationBundleID;
    UIWindow * _windowHoldingActivityViewController;
    UIViewController * _wrapperViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isContentManaged;
@property (nonatomic, retain) UIPrintInteractionController *printInteractionController;
@property (nonatomic, copy) NSString *sourceApplicationBundleID;
@property (readonly) Class superclass;
@property (retain) UIWindow *windowHoldingActivityViewController;
@property (retain) UIViewController *wrapperViewController;

+ (unsigned long long)_xpcAttributes;

- (void).cxx_destruct;
- (bool)_allowsAutoCancelOnDismiss;
- (id)_embeddedActivityViewController;
- (id)_systemImageName;
- (void)activityDidFinish:(bool)arg1;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)cancelPrintOptions;
- (bool)isContentManaged;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (id)printInteractionController;
- (id)printInteractionControllerParentViewController:(id)arg1;
- (id)printInteractionControllerWindowForPresentation:(id)arg1;
- (void)setIsContentManaged:(bool)arg1;
- (void)setPrintInteractionController:(id)arg1;
- (void)setSourceApplicationBundleID:(id)arg1;
- (void)setWindowHoldingActivityViewController:(id)arg1;
- (void)setWrapperViewController:(id)arg1;
- (id)sourceApplicationBundleID;
- (id)windowHoldingActivityViewController;
- (id)wrapperViewController;

@end
