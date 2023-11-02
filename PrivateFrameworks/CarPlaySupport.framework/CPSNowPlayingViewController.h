
@interface CPSNowPlayingViewController : CPUINowPlayingViewController <CPBaseTemplateProviding, CPNowPlayingTemplateProviding, CPSBaseTemplateViewController, CPSButtonDelegate, UIGestureRecognizerDelegate> {
    CPTemplate * _associatedTemplate;
    CPSAudioPlaybackManager * _audioPlaybackManager;
    bool  _didDisappear;
    bool  _isPopping;
    <CPTemplateDelegate> * _templateDelegate;
    NAFuture * _templateProviderFuture;
    <CPSTemplateViewControllerDelegate> * _viewControllerDelegate;
}

@property (nonatomic, retain) CPTemplate *associatedTemplate;
@property (nonatomic, readonly) CPSAudioPlaybackManager *audioPlaybackManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didDisappear;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPopping;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CPTemplateDelegate> *templateDelegate;
@property (nonatomic, retain) NAFuture *templateProviderFuture;
@property (nonatomic) <CPSTemplateViewControllerDelegate> *viewControllerDelegate;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_cps_viewControllerWasPopped;
- (id)associatedTemplate;
- (id)audioPlaybackManager;
- (bool)didDisappear;
- (void)didSelectButton:(id)arg1;
- (id)initWithNowPlayingTemplate:(id)arg1 templateDelegate:(id)arg2 environment:(id)arg3;
- (void)invalidate;
- (bool)isPopping;
- (id)nowPlayingTemplate;
- (void)removeFromParentViewController;
- (void)setAssociatedTemplate:(id)arg1;
- (void)setControl:(id)arg1 enabled:(bool)arg2;
- (void)setControl:(id)arg1 selected:(bool)arg2;
- (void)setDidDisappear:(bool)arg1;
- (void)setIsPopping:(bool)arg1;
- (void)setTemplateDelegate:(id)arg1;
- (void)setTemplateProviderFuture:(id)arg1;
- (void)setViewControllerDelegate:(id)arg1;
- (id)templateDelegate;
- (id)templateProviderFuture;
- (void)updateNowPlayingTemplate:(id)arg1 withProxyDelegate:(id)arg2;
- (id)viewControllerDelegate;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
