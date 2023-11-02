
@interface CLKUIQuadView : UIView {
    NSObject<OS_dispatch_queue> * _asyncRenderQueue;
    NSObject<OS_dispatch_semaphore> * _asyncSemaphore;
    unsigned int  _debugId;
    NSString * _debugIdentifier;
    <CLKUIQuadViewDelegate> * _delegate;
    struct { 
        unsigned int quadViewWillDisplay : 1; 
    }  _delegateRespondsTo;
    NSCountedSet * _disabledRenderingReasons;
    unsigned long long  _frameNum;
    NSMutableArray * _mutableQuads;
    CLKUIQuadViewRenderCoordinator * _renderCoordinator;
    bool  _singleBufferMode;
}

@property (nonatomic, readonly, copy) NSString *debugIdentifier;
@property (nonatomic) <CLKUIQuadViewDelegate> *delegate;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } drawableSize;
@property (nonatomic, readonly) unsigned long long frameNum;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic, readonly) NSArray *quads;
@property (nonatomic) bool singleBufferMode;

+ (id)quadViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 identifier:(id)arg2;
+ (id)quadViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 identifier:(id)arg2 options:(unsigned long long)arg3;
+ (id)quadViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 identifier:(id)arg2 options:(unsigned long long)arg3 colorSpace:(long long)arg4;

- (void).cxx_destruct;
- (void)_async_prepareAndRenderForTime:(double)arg1 inGroup:(id)arg2 checkForDrawable:(bool)arg3 renderDiscontinuity:(bool)arg4 completion:(id /* block */)arg5;
- (bool)_displayAndCheckForDrawable:(bool)arg1 renderDiscontinuity:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)_handleQuadArrayChange:(id)arg1;
- (void)_prepareAndRenderForTime:(double)arg1 inGroup:(id)arg2 checkForDrawable:(bool)arg3 renderDiscontinuity:(bool)arg4 completion:(id /* block */)arg5;
- (void)_prerenderForTime:(double)arg1;
- (void)_runOnRenderQueueIfNeeded:(id /* block */)arg1;
- (bool)_sync_prepareAndRenderForTime:(double)arg1 inGroup:(id)arg2 checkForDrawable:(bool)arg3 renderDiscontinuity:(bool)arg4 completion:(id /* block */)arg5;
- (void)addDisabledRenderingReason:(id)arg1;
- (void)addQuad:(id)arg1;
- (void)addQuadsFromArray:(id)arg1;
- (void)dealloc;
- (id)debugIdentifier;
- (id)delegate;
- (void)didMoveToWindow;
- (void)discardContents;
- (struct CGSize { double x1; double x2; })drawableSize;
- (void)enumerateHierarchyObserversFromView:(id)arg1 withBlock:(id /* block */)arg2;
- (unsigned long long)frameNum;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 identifier:(id)arg2 options:(unsigned long long)arg3 asyncRenderQueue:(id)arg4;
- (bool)isPaused;
- (long long)preferredFramesPerSecond;
- (id)quads;
- (void)removeAllQuads;
- (void)removeDisabledRenderingReason:(id)arg1;
- (void)removeQuad:(id)arg1;
- (bool)renderSynchronouslyWithImageQueueDiscard:(bool)arg1 inGroup:(id)arg2;
- (bool)renderSynchronouslyWithImageQueueDiscard:(bool)arg1 inGroup:(id)arg2 completion:(id /* block */)arg3;
- (void)setDebugIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setSingleBufferMode:(bool)arg1;
- (bool)singleBufferMode;
- (id)snapshotInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scale:(double)arg2 time:(double)arg3;
- (void)willMoveToWindow:(id)arg1;

@end
