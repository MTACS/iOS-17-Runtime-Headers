
@interface FMXPCActivityCriteria : NSObject {
    long long  _delay;
    long long  _gracePeriod;
    long long  _interval;
    unsigned long long  _options;
    long long  _priority;
    bool  _repeating;
}

@property (nonatomic) long long delay;
@property (nonatomic) long long gracePeriod;
@property (nonatomic) long long interval;
@property (nonatomic) unsigned long long options;
@property (nonatomic) long long priority;
@property (nonatomic) bool repeating;

+ (unsigned long long)_optionsFromXPCObject:(id)arg1;

- (long long)_priorityFromString:(const char *)arg1;
- (long long)delay;
- (id)description;
- (long long)gracePeriod;
- (id)initWithPriority:(long long)arg1 repeating:(bool)arg2 delay:(long long)arg3 gracePeriod:(long long)arg4 interval:(long long)arg5 options:(unsigned long long)arg6;
- (id)initWithXPCObject:(id)arg1;
- (long long)interval;
- (bool)isEqual:(id)arg1;
- (unsigned long long)options;
- (long long)priority;
- (bool)repeating;
- (void)setDelay:(long long)arg1;
- (void)setGracePeriod:(long long)arg1;
- (void)setInterval:(long long)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPriority:(long long)arg1;
- (void)setRepeating:(bool)arg1;
- (id)xpcDictionary;

@end
