
@interface PXFeedAutoplayController : NSObject <PXChangeObserver> {
    _PXFeedInlinePlaybackController * _inlinePlaybackController;
    NSMapTable * _playbackRecordsByItemLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _PXFeedInlinePlaybackController *inlinePlaybackController;
@property (nonatomic) bool isContainerLayoutVisible;
@property (nonatomic, readonly) NSMapTable *playbackRecordsByItemLayout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addItemLayout:(id)arg1 withDisplayAsset:(id)arg2;
- (void)containerLayoutVisibleRectDidChange;
- (id)init;
- (id)initWithContainerLayout:(id)arg1 viewModel:(id)arg2 itemLayoutDesiredPlayStateSetter:(id /* block */)arg3;
- (id)inlinePlaybackController;
- (bool)isContainerLayoutVisible;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)playbackRecordsByItemLayout;
- (void)removeItemLayout:(id)arg1;
- (void)setIsContainerLayoutVisible:(bool)arg1;

@end
