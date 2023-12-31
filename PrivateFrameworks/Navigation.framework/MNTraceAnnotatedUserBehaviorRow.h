
@interface MNTraceAnnotatedUserBehaviorRow : NSObject {
    long long  _event;
    double  _timestamp;
}

@property (nonatomic) long long event;
@property (nonatomic) double timestamp;

- (long long)event;
- (void)setEvent:(long long)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
