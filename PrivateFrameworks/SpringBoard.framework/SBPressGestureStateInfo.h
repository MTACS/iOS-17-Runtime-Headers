
@interface SBPressGestureStateInfo : NSObject {
    double  _expirationTime;
    bool  _isCoalescing;
    long long  _state;
    long long  _stateUponExpiration;
}

@property (nonatomic) double expirationTime;
@property (nonatomic) bool isCoalescing;
@property (nonatomic) long long state;
@property (nonatomic) long long stateUponExpiration;

- (double)expirationTime;
- (id)init;
- (bool)isCoalescing;
- (void)setExpirationTime:(double)arg1;
- (void)setIsCoalescing:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setStateUponExpiration:(long long)arg1;
- (long long)state;
- (long long)stateUponExpiration;

@end
