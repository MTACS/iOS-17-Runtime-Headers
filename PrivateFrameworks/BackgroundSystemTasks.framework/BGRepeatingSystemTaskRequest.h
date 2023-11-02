
@interface BGRepeatingSystemTaskRequest : BGSystemTaskRequest {
    double  _interval;
    double  _minDurationBetweenInstances;
}

@property (nonatomic) double interval;
@property (nonatomic) double minDurationBetweenInstances;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithIdentifier:(id)arg1;
- (double)interval;
- (double)minDurationBetweenInstances;
- (void)setInterval:(double)arg1;
- (void)setMinDurationBetweenInstances:(double)arg1;

@end
