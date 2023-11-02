
@interface WKDisplayLinkHandler : NSObject {
    CADisplayLink * _displayLink;
    void * _drawingAreaProxy;
}

- (void)dealloc;
- (void)displayLinkFired:(id)arg1;
- (id)initWithDrawingAreaProxy:(void*)arg1;
- (void)invalidate;
- (unsigned int)nominalFramesPerSecond;
- (void)pause;
- (void)schedule;
- (void)setPreferredFramesPerSecond:(long long)arg1;

@end
