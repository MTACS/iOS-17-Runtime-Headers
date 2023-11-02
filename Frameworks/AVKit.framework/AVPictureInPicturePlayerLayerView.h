
@interface AVPictureInPicturePlayerLayerView : UIView {
    _AVSimplePlayerLayerView * _simplePlayerLayerView;
}

@property (nonatomic, readonly) AVPlayerLayer *playerLayer;

- (void).cxx_destruct;
- (void)attachPlayerLayer;
- (void)detachPlayerLayer;
- (id)playerLayer;

@end
