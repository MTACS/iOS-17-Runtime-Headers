
@interface CPSInlineCardViewController : UIViewController <CPSInlineCardViewDelegate, CPSLaunchContentViewControllerDelegate> {
    <CPSInlineCardViewControllerDelegate> * _delegate;
    CPSLaunchContentViewController * _launchContentViewController;
    PRXCardContainerViewController * _proxController;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPSInlineCardViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSURL *url;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_setupInlineCardViewWithProxCardKit;
- (id)delegate;
- (void)didTapBackgroundView:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)launchContentViewController:(id)arg1 didTapCloseButton:(bool)arg2;
- (void)launchContentViewControllerDidDisappear:(id)arg1 didOpenClip:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (id)url;
- (void)viewWillAppear:(bool)arg1;

@end
