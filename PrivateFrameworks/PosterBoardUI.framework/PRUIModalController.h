
@interface PRUIModalController : NSObject <PRUIInlinePosterEditingViewControllerDelegate> {
    <PRUIModalControllerDelegate> * _delegate;
    <PRUIModalEntryPoint> * _entryPoint;
    UIWindow * _window;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRUIModalControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)handleHostSceneTransitionedFromActiveState;
- (id)initWithEntryPoint:(id)arg1;
- (void)inlineEditingViewController:(id)arg1 didDismissWithResponse:(id)arg2;
- (void)inlineEditingViewController:(id)arg1 willDismissWithResponse:(id)arg2;
- (void)presentFromWindowScene:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
