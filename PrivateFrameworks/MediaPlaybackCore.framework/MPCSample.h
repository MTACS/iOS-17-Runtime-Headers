
@interface MPCSample : NSObject {
    double  _level;
    int  _number;
    long long  _state;
    int  _thermalLevel;
    double  _time;
}

@property (nonatomic, readonly) double level;
@property (nonatomic, readonly) int number;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) int thermalLevel;
@property (nonatomic, readonly) double time;

- (id)initWithLevel:(double)arg1 time:(double)arg2 state:(long long)arg3;
- (double)level;
- (int)number;
- (void)setThermalLevel:(int)arg1;
- (long long)state;
- (int)thermalLevel;
- (double)time;

@end
