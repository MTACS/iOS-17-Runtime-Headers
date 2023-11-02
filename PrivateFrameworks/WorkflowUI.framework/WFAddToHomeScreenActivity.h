
@interface WFAddToHomeScreenActivity : UIActivity <UIAdaptivePresentationControllerDelegate, WFAddToHomeScreenViewControllerDelegate> {
    <WFAddToHomeScreenActivityDelegate> * _delegate;
    UINavigationController * _navigationController;
    NSString * _source;
    WFWorkflow * _workflow;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFAddToHomeScreenActivityDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UINavigationController *navigationController;
@property (nonatomic, copy) NSString *source;
@property (readonly) Class superclass;
@property (nonatomic, retain) WFWorkflow *workflow;

- (void).cxx_destruct;
- (id)_systemImageName;
- (void)activityDidFinish:(bool)arg1;
- (void)activityDidFinish:(bool)arg1 shouldDismiss:(bool)arg2;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (void)addToHomeScreenViewController:(id)arg1 didFinishWithName:(id)arg2 icon:(id)arg3;
- (void)addToHomeScreenWithName:(id)arg1 icon:(id)arg2;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)cancel;
- (id)delegate;
- (id)initWithSource:(id)arg1;
- (id)navigationController;
- (void)prepareWithActivityItems:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setWorkflow:(id)arg1;
- (id)source;
- (id)workflow;

@end
