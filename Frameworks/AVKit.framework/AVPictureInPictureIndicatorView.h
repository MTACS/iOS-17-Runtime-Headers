
@interface AVPictureInPictureIndicatorView : UIView {
    NSString * _customMessage;
    AVPictureInPictureIndicatorLayer * _pipIndicatorLayer;
}

@property (nonatomic, copy) NSString *customMessage;
@property (nonatomic, retain) AVPictureInPictureIndicatorLayer *pipIndicatorLayer;

- (void).cxx_destruct;
- (void)_addIndicatorLayerIfNeeded;
- (void)_updateGeometry;
- (id)customMessage;
- (void)didMoveToWindow;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)pipIndicatorLayer;
- (void)setBackgroundColor:(id)arg1;
- (void)setCustomMessage:(id)arg1;
- (void)setPipIndicatorLayer:(id)arg1;

@end
