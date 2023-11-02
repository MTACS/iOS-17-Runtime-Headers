
@interface _UIEditMenuOverlayUIClientPresentation : _UIEditMenuPresentation <_UIOMenuPresentationClient, _UIOverlayServiceDelegate> {
    _UIHostedMenuManager * _menuManager;
    _UIOverlayService * _overlayService;
    _UIOEditMenuPresentationConfiguration * _presentationConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UIHostedMenuManager *menuManager;
@property (nonatomic, readonly) _UIOverlayService *overlayService;
@property (nonatomic, readonly) _UIOEditMenuPresentationConfiguration *presentationConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureOverlayServiceIfNeeded;
- (void)didTransitionFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)displayMenu:(id)arg1 configuration:(id)arg2;
- (id)displayedMenu;
- (void)handleLifecycleEvent:(long long)arg1;
- (void)hideMenuWithReason:(long long)arg1;
- (id)initWithDelegate:(id)arg1 sourceView:(id)arg2;
- (id)menuManager;
- (id)overlayService;
- (void)overlayServiceDidInvalidate:(id)arg1;
- (void)performMenuLeafAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)preparedMenuWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)presentationConfiguration;
- (void)replaceVisibleMenuWithMenu:(id)arg1 reason:(long long)arg2;
- (void)setDisplayedMenu:(id)arg1;
- (void)sourceViewDidUpdateFromTraitCollection:(id)arg1;

@end
