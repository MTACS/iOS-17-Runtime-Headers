
@interface HKPersistentTimer : NSObject {
    NSString * _fullTimerKey;
}

@property (nonatomic, retain) NSString *fullTimerKey;

+ (id)_prefixedKeyWithTimerKey:(id)arg1;
+ (id)timerWithKey:(id)arg1;

- (void).cxx_destruct;
- (void)clear;
- (unsigned long long)elapsedNanoseconds;
- (unsigned long long)elapsedSeconds;
- (id)fullTimerKey;
- (void)setFullTimerKey:(id)arg1;
- (void)start;
- (id)timerValue;

@end
