
@interface MPCPlaybackEngineEvent : NSObject {
    NSUUID * _identifier;
    unsigned long long  _machAbsoluteTime;
    struct { 
        unsigned long long flags; 
        unsigned long long machAbsoluteTime; 
        unsigned long long rawNanoSeconds; 
        unsigned long long timebase; 
        double userSecondsSinceReferenceDate; 
    }  _monotonicTime;
    NSDictionary * _payload;
    int  _threadPriority;
    NSString * _type;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) unsigned long long machAbsoluteTime;
@property (nonatomic, readonly) NSDate *monotonicDate;
@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; double x5; } monotonicTime;
@property (nonatomic, readonly) unsigned long long monotonicTimeNanoSeconds;
@property (nonatomic, readonly, copy) NSDictionary *payload;
@property (nonatomic, readonly) int threadPriority;
@property (nonatomic, readonly, copy) NSString *type;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)date;
- (id)description;
- (double)durationSinceEvent:(id)arg1;
- (id)earlierEvent:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithType:(id)arg1 payload:(id)arg2 monotonicTime:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; double x5; })arg3 threadPriority:(int)arg4 identifier:(id)arg5;
- (bool)isEqual:(id)arg1;
- (unsigned long long)machAbsoluteTime;
- (bool)matchesPayload:(id)arg1;
- (id)monotonicDate;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; double x5; })monotonicTime;
- (unsigned long long)monotonicTimeNanoSeconds;
- (id)payload;
- (id)previousItemEventWithCursor:(id)arg1 type:(id)arg2;
- (int)threadPriority;
- (double)timeIntervalSinceEvent:(id)arg1;
- (id)type;

@end
