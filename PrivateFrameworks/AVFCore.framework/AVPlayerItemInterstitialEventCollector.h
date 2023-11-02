
@interface AVPlayerItemInterstitialEventCollector : AVPlayerItemMediaDataCollector {
    NSObject<OS_dispatch_queue> * _ivarAccessQueue;
    id /* block */  _obtainCoordinator;
    AVPlayerItem * _weakReferenceToPlayerItem;
}

- (void).cxx_destruct;
- (bool)_attachToPlayerItem:(id)arg1;
- (void)_detatchFromPlayerItem;
- (void)_updateTaggedRangeMetadataArray:(id)arg1;
- (void)dealloc;
- (id)initWithCoordinatorGenerator:(id /* block */)arg1;

@end
