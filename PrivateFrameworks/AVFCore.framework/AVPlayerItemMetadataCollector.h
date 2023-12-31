
@interface AVPlayerItemMetadataCollector : AVPlayerItemMediaDataCollector {
    AVPlayerItemMetadataCollectorInternal * _metadataCollectorInternal;
}

@property (nonatomic, readonly) <AVPlayerItemMetadataCollectorPushDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;

- (bool)_attachToPlayerItem:(id)arg1;
- (void)_detatchFromPlayerItem;
- (id)_getFilteredMetadataGroups:(id)arg1 fromIdentifiers:(id)arg2 andClassifyingLabels:(id)arg3 modifiedIndexesOut:(id*)arg4 newIndexesOut:(id*)arg5;
- (bool)_isAttachedToPlayerItem;
- (void)_updateTaggedRangeMetadataArray:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)init;
- (id)initWithIdentifiers:(id)arg1 classifyingLabels:(id)arg2;
- (void)setDelegate:(id)arg1 queue:(id)arg2;

@end
