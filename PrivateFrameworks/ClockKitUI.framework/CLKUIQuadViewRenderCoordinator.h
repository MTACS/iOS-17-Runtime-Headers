
@interface CLKUIQuadViewRenderCoordinator : NSObject <CLKUIRenderCoordinator> {
    CLKUIQuadView * _quadView;
    bool  _renderDiscontinuity;
    CLKUIRenderFrequencyLink * _renderFrequencyLink;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) unsigned long long preferredFramesPerSecond;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_renderLinkFired:(id)arg1;
- (id)initWithQuadView:(id)arg1 synchronizeWithClockTimer:(bool)arg2;
- (void)invalidate;
- (bool)isPaused;
- (unsigned long long)preferredFramesPerSecond;
- (void)setPaused:(bool)arg1;
- (void)setPreferredFramesPerSecond:(unsigned long long)arg1;
- (double)timestamp;

@end
