
@interface CPSBaseTemplateViewController : UIViewController <BSInvalidatable, CPBaseTemplateProviding, CPSBaseTemplateViewController, CPSButtonDelegate, CPSTemplateEnvironmentDelegate, UIGestureRecognizerDelegate> {
    CPTemplate * _associatedTemplate;
    UITapGestureRecognizer * _backGestureRecognizer;
    bool  _didDisappear;
    bool  _isNowPlayingApp;
    bool  _isPopping;
    <CPTemplateDelegate> * _templateDelegate;
    CPSTemplateEnvironment * _templateEnvironment;
    NAFuture * _templateProviderFuture;
    <CPSTemplateViewControllerDelegate> * _viewControllerDelegate;
}

@property (nonatomic, retain) CPTemplate *associatedTemplate;
@property (nonatomic, retain) UITapGestureRecognizer *backGestureRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didDisappear;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isNowPlayingApp;
@property (nonatomic) bool isPopping;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CPTemplateDelegate> *templateDelegate;
@property (nonatomic, readonly) CPSTemplateEnvironment *templateEnvironment;
@property (nonatomic, readonly) NAFuture *templateProviderFuture;
@property (nonatomic) <CPSTemplateViewControllerDelegate> *viewControllerDelegate;

- (void).cxx_destruct;
- (void)_addGestureRecognizerIfNecessary;
- (void)_backGestureFired:(id)arg1;
- (id)_barButtonItemForBarButton:(id)arg1;
- (id)_barButtonItemForIdentifier:(id)arg1;
- (void)_cleanup;
- (void)_cps_viewControllerWasPopped;
- (void)_dismissTemplateViewController;
- (id)_nowPlayingBarButtonItem;
- (void)_nowPlayingButtonTapped:(id)arg1;
- (void)_updateLeadingBarButtons;
- (void)_updateTemplate:(id)arg1;
- (void)_updateTrailingBarButtons;
- (void)_viewDidLoad;
- (bool)_wantsNowPlayingButton;
- (void)applicationDidBecomeNowPlayingApp:(bool)arg1;
- (id)associatedTemplate;
- (id)backGestureRecognizer;
- (void)dealloc;
- (bool)didDisappear;
- (void)didSelectButton:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2;
- (id)initWithTemplate:(id)arg1 templateDelegate:(id)arg2 templateEnvironment:(id)arg3;
- (void)invalidate;
- (bool)isNowPlayingApp;
- (bool)isPopping;
- (void)removeFromParentViewController;
- (void)setAssociatedTemplate:(id)arg1;
- (void)setBackGestureRecognizer:(id)arg1;
- (void)setBarButton:(id)arg1 image:(id)arg2;
- (void)setBarButton:(id)arg1 title:(id)arg2;
- (void)setControl:(id)arg1 enabled:(bool)arg2;
- (void)setControl:(id)arg1 selected:(bool)arg2;
- (void)setDidDisappear:(bool)arg1;
- (void)setHostBackButton:(id)arg1;
- (void)setIsNowPlayingApp:(bool)arg1;
- (void)setIsPopping:(bool)arg1;
- (void)setLeadingNavigationBarButtons:(id)arg1;
- (void)setTemplateDelegate:(id)arg1;
- (void)setTrailingNavigationBarButtons:(id)arg1;
- (void)setViewControllerDelegate:(id)arg1;
- (id)templateDelegate;
- (id)templateEnvironment;
- (id)templateProviderFuture;
- (id)viewControllerDelegate;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
