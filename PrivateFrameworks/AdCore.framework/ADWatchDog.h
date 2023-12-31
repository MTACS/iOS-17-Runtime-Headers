
@interface ADWatchDog : NSObject {
    unsigned long long  _delayTime;
    NSString * _reason;
}

@property (nonatomic) unsigned long long delayTime;
@property (nonatomic, retain) NSString *reason;

- (void).cxx_destruct;
- (unsigned long long)delayTime;
- (id)initWithReason:(id)arg1 andDelay:(unsigned long long)arg2;
- (id)reason;
- (void)setDelayTime:(unsigned long long)arg1;
- (void)setReason:(id)arg1;
- (void)updateReason:(id)arg1;

@end
