
@interface AVSynchronizedLayer : CALayer {
    AVSynchronizedLayerInternal * _syncLayer;
}

@property (nonatomic, retain) AVPlayerItem *playerItem;

+ (void)initialize;
+ (id)synchronizedLayerWithPlayerItem:(id)arg1;

- (bool)_isVisible;
- (id)_popAllOldPlayerItems;
- (void)_removeSelfFromPlayerItem:(id)arg1;
- (void)_updatePlayerItemState;
- (void)dealloc;
- (id)init;
- (void)layerDidBecomeVisible:(bool)arg1;
- (id)playerItem;
- (void)setPlayerItem:(id)arg1;

@end
