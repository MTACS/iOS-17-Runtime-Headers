
@interface GEOAPNavSessionData : NSObject <NSSecureCoding> {
    double  _accumulatedNavTime;
    bool  _isEV;
    bool  _isPaused;
    NSUUID * _routeId;
    NSUUID * _sessionId;
    double  _startTime;
}

@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isEV;
@property (nonatomic, readonly) double legStartTime;
@property (nonatomic, readonly) NSUUID *routeId;
@property (nonatomic, readonly) NSUUID *sessionId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)accumulatedSessionDurationAt:(double)arg1;
- (void)clearNavSession;
- (void)encodeWithCoder:(id)arg1;
- (void)endNavWithRouteId:(id)arg1 at:(double)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isActive;
- (bool)isCurrentRouteId:(id)arg1;
- (bool)isEV;
- (double)legStartTime;
- (void)pauseNavWithRouteId:(id)arg1 at:(double)arg2;
- (void)rerollAt:(double)arg1;
- (void)resumeNavWithRouteId:(id)arg1 at:(double)arg2;
- (id)routeId;
- (id)sessionId;
- (void)startNavWithRouteId:(id)arg1 isEV:(bool)arg2 at:(double)arg3;

@end
