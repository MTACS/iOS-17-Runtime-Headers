
@interface _UIEditMenuInProcessPresentation : _UIEditMenuContentPresentation {
    _UIEditMenuContainerView * _menuContainerView;
    _UIEditMenuContainerView * _touchPassthroughView;
}

- (void).cxx_destruct;
- (bool)canPresentEditMenu;
- (id)configureContainerViewWithConfiguration:(id)arg1;
- (id)containerView;
- (void)teardownContainerView;

@end
