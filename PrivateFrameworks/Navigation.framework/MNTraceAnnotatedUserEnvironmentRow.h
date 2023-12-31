
@interface MNTraceAnnotatedUserEnvironmentRow : NSObject {
    double  _endTimestamp;
    long long  _environmentType;
    double  _startTimestamp;
}

@property (nonatomic) double endTimestamp;
@property (nonatomic) long long environmentType;
@property (nonatomic) double startTimestamp;

- (double)endTimestamp;
- (long long)environmentType;
- (void)setEndTimestamp:(double)arg1;
- (void)setEnvironmentType:(long long)arg1;
- (void)setStartTimestamp:(double)arg1;
- (double)startTimestamp;

@end
