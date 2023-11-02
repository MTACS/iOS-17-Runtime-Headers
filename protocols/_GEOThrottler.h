
@protocol _GEOThrottler <NSObject>

@required

+ (bool)stateIsExpired:(NSDictionary *)arg1;

- (bool)addRequestTimestamp;
- (NSDictionary *)captureState;
- (id)initWithKeyPath:(NSString *)arg1 requestCount:(unsigned long long)arg2 interval:(double)arg3 savedState:(NSDictionary *)arg4;
- (bool)isExpired;
- (NSString *)keyPath;
- (unsigned int)maxReqCount;
- (unsigned long long)remainingEntries;
- (double)timeUntilReset;
- (double)timeWindow;
- (NSDictionary *)userInfoForError;

@end
