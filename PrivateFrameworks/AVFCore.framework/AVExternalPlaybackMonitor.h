
@interface AVExternalPlaybackMonitor : NSObject {
    AVExternalPlaybackMonitorInternal * _ivars;
}

@property (getter=isAirPlayVideoActive, readonly) bool airPlayVideoActive;
@property (getter=isAirPlayVideoPlaying, readonly) bool airPlayVideoPlaying;

+ (void)initialize;
+ (id)longFormVideoExternalPlaybackMonitor;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithFigRoutingSessionManager:(struct OpaqueFigRoutingSessionManager { }*)arg1;
- (bool)isAirPlayVideoActive;
- (bool)isAirPlayVideoPlaying;

@end
