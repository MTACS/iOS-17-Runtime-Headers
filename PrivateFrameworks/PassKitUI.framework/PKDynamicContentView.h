
@interface PKDynamicContentView : UIView {
    PKDynamicLayerEmitterConfiguration * _dynamicLayerEmitterConfiguration;
    CAEmitterLayer * _emitterLayer;
    UIImageView * _imageView;
    bool  _paused;
}

@property (getter=isPaused, nonatomic) bool paused;

- (void).cxx_destruct;
- (void)_configureEmitterLayerWithImage:(id)arg1;
- (void)_pauseEmitters;
- (void)_startEmitters;
- (void)dealloc;
- (id)initWithImage:(id)arg1 emitterImage:(id)arg2 dynamicLayerEmitterConfiguration:(id)arg3;
- (void)invalidate;
- (bool)isPaused;
- (void)layoutSubviews;
- (void)setPaused:(bool)arg1;

@end
