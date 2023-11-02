
@interface _GEOThrottlerLong : NSObject <_GEOThrottler> {
    unsigned int  _currentRequestCount;
    NSString * _keyPath;
    double  _lastResetTime;
    double  _lastUseTime;
    unsigned int  _maxRequestCount;
    double  _timeWindow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *keyPath;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeWindow;

+ (bool)stateIsExpired:(id)arg1;

- (void).cxx_destruct;
- (bool)addRequestTimestamp;
- (id)captureState;
- (id)description;
- (double)expiresAt;
- (id)initWithKeyPath:(id)arg1 requestCount:(unsigned long long)arg2 interval:(double)arg3 savedState:(id)arg4;
- (bool)isExpired;
- (id)keyPath;
- (void)loadState:(id)arg1;
- (unsigned int)maxReqCount;
- (unsigned long long)remainingEntries;
- (double)timeUntilReset;
- (double)timeWindow;
- (id)userInfoForError;

@end
