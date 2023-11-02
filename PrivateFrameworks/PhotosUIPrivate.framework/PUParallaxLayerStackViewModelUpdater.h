
@interface PUParallaxLayerStackViewModelUpdater : NSObject <NSCopying> {
    PIParallaxLayerStackRequest * _backfillRenderRequest;
    PIParallaxClockMaterialRequest * _clockMaterialRequest;
    PIParallaxClockLayoutRequest * _clockOverlapRequest;
    <PISegmentationItem> * _item;
    PIParallaxLayerStackRequest * _mainRenderRequest;
    PIParallaxLayerStackRequest * _settlingEffectRenderRequest;
    NUCoalescer * _styleChangeCoalescer;
    NSObject<OS_dispatch_group> * _transactionGroup;
    NSObject<OS_dispatch_queue> * _transactionResponseQueue;
}

@property (nonatomic, retain) PIParallaxLayerStackRequest *backfillRenderRequest;
@property (nonatomic, retain) PIParallaxClockMaterialRequest *clockMaterialRequest;
@property (nonatomic, retain) PIParallaxClockLayoutRequest *clockOverlapRequest;
@property (nonatomic, readonly) <PISegmentationItem> *item;
@property (nonatomic, retain) PIParallaxLayerStackRequest *mainRenderRequest;
@property (nonatomic, retain) PIParallaxLayerStackRequest *settlingEffectRenderRequest;
@property (nonatomic, retain) NUCoalescer *styleChangeCoalescer;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *transactionGroup;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *transactionResponseQueue;

- (void).cxx_destruct;
- (void)_updatePriorityForRequest:(id)arg1 viewModel:(id)arg2 highPriority:(bool)arg3 importanceOrder:(double)arg4;
- (id)backfillRenderRequest;
- (void)beginRenderTransaction;
- (void)cancelPendingRenders;
- (id)clockMaterialRequest;
- (id)clockOverlapRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)endRenderTransaction;
- (void)ensureOffscreenModelIsUnloaded:(id)arg1;
- (void)ensureOnscreenModelIsLoaded:(id)arg1;
- (id)init;
- (id)initWithSegmentationItem:(id)arg1;
- (id)item;
- (id)mainRenderRequest;
- (void)notifyWhenInFlightRendersComplete:(id /* block */)arg1;
- (void)recalculateClockAreaLuminance:(id)arg1 highPriority:(bool)arg2 importanceOrder:(double)arg3;
- (void)recalculateClockIntersection:(id)arg1 allViewModels:(id)arg2 highPriority:(bool)arg3;
- (void)recalculateClockOverlap:(id)arg1 allViewModels:(id)arg2 highPriority:(bool)arg3;
- (void)recalculateClockOverlap:(id)arg1 highPriority:(bool)arg2 importanceOrder:(double)arg3 allViewModels:(id)arg4 intersectionOnly:(bool)arg5 completion:(id /* block */)arg6;
- (void)renderBackfillLayers:(id)arg1 highPriority:(bool)arg2 importanceOrder:(double)arg3 completion:(id /* block */)arg4;
- (void)renderMainLayers:(id)arg1 highPriority:(bool)arg2 importanceOrder:(double)arg3 completion:(id /* block */)arg4;
- (void)renderModelAfterStyleInitialization:(id)arg1 isOnscreen:(bool)arg2;
- (void)renderOffscreenModelAfterVisibleFrameChange:(id)arg1 highPriority:(bool)arg2;
- (void)renderOnscreenModelAfterStyleChange:(id)arg1;
- (void)renderOnscreenModelAfterVisibleFrameChange:(id)arg1 allViewModels:(id)arg2;
- (void)renderSettlingEffectLayerIfNeededForViewModel:(id)arg1 highPriority:(bool)arg2 importanceOrder:(double)arg3;
- (void)setBackfillRenderRequest:(id)arg1;
- (void)setClockMaterialRequest:(id)arg1;
- (void)setClockOverlapRequest:(id)arg1;
- (void)setMainRenderRequest:(id)arg1;
- (void)setSettlingEffectRenderRequest:(id)arg1;
- (void)setStyleChangeCoalescer:(id)arg1;
- (void)setTransactionGroup:(id)arg1;
- (void)setTransactionResponseQueue:(id)arg1;
- (id)settlingEffectRenderRequest;
- (id)styleChangeCoalescer;
- (id)transactionGroup;
- (id)transactionResponseQueue;
- (bool)waitForInFlightRenders:(double)arg1;

@end
