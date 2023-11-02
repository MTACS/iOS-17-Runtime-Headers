
@interface MSStopwatchLap : NSObject {
    unsigned long long  _lapTime;
    NSString * _name;
}

@property (nonatomic) unsigned long long lapTime;
@property (nonatomic, readonly) unsigned long long lapTimeMS;
@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (id)initWithLapTime:(unsigned long long)arg1 andName:(id)arg2;
- (unsigned long long)lapTime;
- (unsigned long long)lapTimeMS;
- (id)name;
- (void)setLapTime:(unsigned long long)arg1;
- (void)setName:(id)arg1;

@end
