
@interface DADeviceStateRecord : NSObject {
    NSString * _state;
    NSNumber * _time;
}

@property (nonatomic, retain) NSString *state;
@property (nonatomic, retain) NSNumber *time;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithState:(id)arg1 andTime:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setState:(id)arg1;
- (void)setTime:(id)arg1;
- (id)state;
- (id)stateTransitionAsString:(id)arg1;
- (id)time;
- (id)timeIntervelBetweenState:(id)arg1;

@end
