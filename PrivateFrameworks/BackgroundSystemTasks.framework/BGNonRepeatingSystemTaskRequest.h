
@interface BGNonRepeatingSystemTaskRequest : BGSystemTaskRequest {
    double  _scheduleAfter;
    double  _trySchedulingBefore;
}

@property (nonatomic) double scheduleAfter;
@property (nonatomic) double trySchedulingBefore;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithIdentifier:(id)arg1;
- (double)scheduleAfter;
- (void)setScheduleAfter:(double)arg1;
- (void)setTrySchedulingBefore:(double)arg1;
- (double)trySchedulingBefore;

@end
