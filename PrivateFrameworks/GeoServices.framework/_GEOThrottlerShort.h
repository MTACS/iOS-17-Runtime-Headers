
@interface _GEOThrottlerShort : NSObject <_GEOThrottler> {
    unsigned int  _currentIndex;
    NSString * _keyPath;
    struct vector<(anonymous namespace)::Timestamp, std::allocator<(anonymous namespace)::Timestamp>>="__begin_"^{Timestamp {}  _lastRequestTimes;
    double  _timeWindow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *keyPath;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeWindow;

+ (bool)stateIsExpired:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addRequestTimestamp;
- (id)captureState;
- (id)description;
- (id)initWithKeyPath:(id)arg1 requestCount:(unsigned long long)arg2 interval:(double)arg3 savedState:(id)arg4;
- (bool)isExpired;
- (id)keyPath;
- (unsigned int)maxReqCount;
- (unsigned long long)remainingEntries;
- (double)timeUntilReset;
- (double)timeWindow;
- (id)userInfoForError;

@end
