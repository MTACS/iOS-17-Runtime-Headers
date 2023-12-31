
@interface AVSecondScreenPlayerLayerView : UIView {
    AVPlayerLayer * _activeSourcePlayerLayer;
    AVObservationController * _observationController;
}

@property (nonatomic) AVPlayerLayer *activeSourcePlayerLayer;
@property (nonatomic, readonly) AVPlayerLayer *layer;
@property (nonatomic, retain) AVObservationController *observationController;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)activeSourcePlayerLayer;
- (void)dealloc;
- (id)observationController;
- (void)setActiveSourcePlayerLayer:(id)arg1;
- (void)setObservationController:(id)arg1;
- (void)startShowingContentFromSourcePlayerLayer:(id)arg1;
- (void)stopShowingContentFromActiveSourcePlayerLayer;

@end
