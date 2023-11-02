
@interface TabSnapshotGenerator : NSObject {
    <TabSnapshotGeneratorDelegate> * _delegate;
    NSMutableArray * _requestQueue;
}

@property (nonatomic) <TabSnapshotGeneratorDelegate> *delegate;

+ (id)_snapshotRenderingQueue;

- (void).cxx_destruct;
- (void)_beginNextItemIfIdle;
- (void)_didFinishItem:(id)arg1 withImage:(id)arg2;
- (id)_renderView:(id)arg1 afterScreenUpdates:(bool)arg2;
- (void)_snapshotItem:(id)arg1;
- (id)backgroundColorForContentProvider:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForContentProvider:(id)arg1 withSnapshotSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)contentShouldUnderlapTopBackdropForContentProvider:(id)arg1;
- (id)delegate;
- (id)init;
- (id)renderSnapshotWithSize:(struct CGSize { double x1; double x2; })arg1 backgroundColor:(id)arg2 topBackdropHeight:(double)arg3 options:(unsigned long long)arg4 drawing:(id /* block */)arg5;
- (void)setDelegate:(id)arg1;
- (void)snapshotWithRequest:(id)arg1 contentProvider:(id)arg2 completion:(id /* block */)arg3;

@end
