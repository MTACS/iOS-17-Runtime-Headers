
@interface CLKUIRenderFrequencyLink : NSObject <CLKUIRenderCoordinator> {
    bool  _paused;
    long long  _preferredFramesPerSecond;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) unsigned long long preferredFramesPerSecond;
@property (readonly) Class superclass;

- (id)init;
- (void)invalidate;
- (bool)isPaused;
- (unsigned long long)preferredFramesPerSecond;
- (void)setPaused:(bool)arg1;
- (void)setPreferredFramesPerSecond:(unsigned long long)arg1;
- (void)updateCoordinator;

@end
