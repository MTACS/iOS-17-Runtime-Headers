
@interface _UIEditMenuOverlayUIServerPresentation : _UIEditMenuContentPresentation {
    <UIOverlayServerDisplayDelegate> * _displayDelegate;
    _UIEditMenuContainerView * _menuContainerView;
    _UIOServerActionOriginContext * _originContext;
    _UIOEditMenuPresentationConfiguration * _presentationConfiguration;
}

@property (nonatomic, readonly) _UIOServerActionOriginContext *originContext;
@property (nonatomic, readonly) _UIOEditMenuPresentationConfiguration *presentationConfiguration;

- (void).cxx_destruct;
- (bool)canPresentEditMenu;
- (id)configureContainerViewWithConfiguration:(id)arg1;
- (id)containerView;
- (void)displayMenuForConfiguration:(id)arg1 originContext:(id)arg2 inDisplayDelegate:(id)arg3;
- (long long)initialUserInterfaceStyle;
- (id)originContext;
- (id)presentationConfiguration;
- (void)sourceViewDidUpdateFromTraitCollection:(id)arg1;
- (void)teardownContainerView;
- (bool)wantsPasteTouchAuthenticationInEditMenuListView:(id)arg1;

@end
