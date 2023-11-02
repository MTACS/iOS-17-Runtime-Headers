
@interface SBWorkspaceTransientOverlay : SBWorkspaceEntity {
    SBTransientOverlayViewController * _viewController;
}

@property (nonatomic, readonly) SBTransientOverlayViewController *viewController;

- (void).cxx_destruct;
- (id /* block */)_generator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithViewController:(id)arg1;
- (id)viewController;

@end
