
@interface SBFullScreenLiveContentOverlayContext : NSObject {
    <SBFullScreenSwitcherSceneLiveContentOverlay> * _overlay;
    long long  _overlayType;
}

@property (nonatomic, readonly) <SBFullScreenSwitcherSceneLiveContentOverlay> *overlay;
@property (nonatomic, readonly) long long overlayType;

- (void).cxx_destruct;
- (id)initWithOverlay:(id)arg1;
- (id)overlay;
- (long long)overlayType;

@end
