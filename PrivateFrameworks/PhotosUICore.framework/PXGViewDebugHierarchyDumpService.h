
@interface PXGViewDebugHierarchyDumpService : PXDiagnosticsService {
    PXGView * _gridView;
}

@property (nonatomic, readonly) PXGView *gridView;

- (void).cxx_destruct;
- (bool)canPerformAction;
- (id)gridView;
- (id)initWithItemProviders:(id)arg1;
- (void)performAction;
- (id)title;

@end
