
@interface CLKUIDisplayLink : CLKUIRenderFrequencyLink {
    CADisplayLink * _displayLink;
}

- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)invalidate;
- (void)updateCoordinator;

@end
