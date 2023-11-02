
@interface PKDisplayLinkObserver : NSObject {
    CADisplayLink * _displayLink;
    id /* block */  _handler;
}

- (void).cxx_destruct;
- (void)_displayLinkHandler:(id)arg1;
- (void)dealloc;
- (id)initWithHandler:(id /* block */)arg1;
- (bool)startWithPreferredFramesPerSecond:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1 addToRunLoop:(id)arg2 forMode:(id)arg3;
- (bool)stop;

@end
