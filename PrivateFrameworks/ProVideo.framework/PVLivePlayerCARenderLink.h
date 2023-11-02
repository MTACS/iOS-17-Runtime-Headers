
@interface PVLivePlayerCARenderLink : PVLivePlayerRenderLink {
    CADisplayLink * _displayLink;
    long long  _prefferedCADisplayFPS;
}

@property (nonatomic) long long prefferedCADisplayFPS;

- (void).cxx_destruct;
- (void)displayLinkFired:(id)arg1;
- (id)initWithCADisplayLinkFPS:(long long)arg1;
- (long long)prefferedCADisplayFPS;
- (void)rebuild;
- (void)setPrefferedCADisplayFPS:(long long)arg1;
- (void)teardown;

@end
