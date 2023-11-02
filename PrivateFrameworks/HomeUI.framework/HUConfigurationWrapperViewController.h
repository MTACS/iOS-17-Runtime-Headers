
@interface HUConfigurationWrapperViewController : UIViewController <HUConfigurationContentViewControllerDelegate, HUConfigurationViewController, HUPreloadableViewController> {
    UIBarButtonItem * _backButtonItem;
    UIViewController * _contentViewController;
    <HUConfigurationViewControllerDelegate> * _delegate;
    NAFuture * _finishFuture;
    bool  _isFinalStep;
    UIBarButtonItem * _nextButtonItem;
}

@property (nonatomic, retain) UIBarButtonItem *backButtonItem;
@property (nonatomic, retain) UIViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NAFuture *finishFuture;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFinalStep;
@property (nonatomic, retain) UIBarButtonItem *nextButtonItem;
@property (nonatomic, readonly) UIViewController<HUConfigurationContentViewController> *protocolConformingContentViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_backAction:(id)arg1;
- (bool)_canGoNext;
- (void)_nextAction:(id)arg1;
- (void)_updateNextButton;
- (id)backButtonItem;
- (id)contentViewController;
- (void)contentViewControllerDidUpdate:(id)arg1;
- (id)delegate;
- (id)finishFuture;
- (id)hu_preloadContent;
- (id)initWithContentViewController:(id)arg1;
- (id)initWithContentViewController:(id)arg1 configurationDelegate:(id)arg2;
- (bool)isFinalStep;
- (id)nextButtonItem;
- (id)protocolConformingContentViewController;
- (void)setBackButtonItem:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFinishFuture:(id)arg1;
- (void)setIsFinalStep:(bool)arg1;
- (void)setNextButtonItem:(id)arg1;
- (id)title;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
