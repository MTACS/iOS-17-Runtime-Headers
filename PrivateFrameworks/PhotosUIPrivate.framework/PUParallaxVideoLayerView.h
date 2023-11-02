
@interface PUParallaxVideoLayerView : PUParallaxLayerView {
    PUParallaxVideoLayerContentView * _contentView;
    PUParallaxLayerLayoutInfo * _currentLayoutInfo;
    PFParallaxVideoLayer * _parallaxVideoLayer;
}

@property (nonatomic, readonly) PUParallaxVideoLayerContentView *contentView;
@property (nonatomic, retain) PUParallaxLayerLayoutInfo *currentLayoutInfo;
@property (nonatomic, retain) PFParallaxVideoLayer *parallaxVideoLayer;
@property (nonatomic, readonly) AVPlayer *player;

- (void).cxx_destruct;
- (void)_layoutWithCurrentLayoutInfo;
- (void)_updateParallaxVideoLayerProperties;
- (id)contentView;
- (id)currentLayoutInfo;
- (id)initWithParallaxVideoLayer:(id)arg1;
- (void)layoutWithInfo:(id)arg1;
- (id)parallaxLayer;
- (id)parallaxVideoLayer;
- (id)player;
- (void)setCurrentLayoutInfo:(id)arg1;
- (void)setParallaxVideoLayer:(id)arg1;
- (id)snapshotViewAfterScreenUpdates:(bool)arg1;

@end
