
@interface AVPlayerItemMediaDataCollector : NSObject {
    AVPlayerItemMediaDataCollectorInternal * _collectorInternal;
}

- (bool)_attachToPlayerItem:(id)arg1;
- (void)_detatchFromPlayerItem;
- (id)_weakReference;
- (void)dealloc;
- (id)init;

@end
