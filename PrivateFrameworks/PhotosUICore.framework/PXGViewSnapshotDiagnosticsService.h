
@interface PXGViewSnapshotDiagnosticsService : PXDiagnosticsService {
    PXGView * _tungstenView;
    UIViewController * _viewController;
}

@property (nonatomic, readonly) PXGView *tungstenView;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (bool)canPerformAction;
- (id)initWithItemProviders:(id)arg1;
- (void)performAction;
- (id)title;
- (id)tungstenView;
- (id)viewController;

@end
