
@interface BMEventTimeElapsingImplementor : BMEventBase <BMEventTimeElapsing> {
    double  absoluteTimestamp;
    double  duration;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, copy) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (double)absoluteTimestamp;
- (id)dateInterval;
- (double)duration;
- (id)init;
- (bool)isCompleteWithContext:(id)arg1 error:(id*)arg2;
- (bool)isValidWithContext:(id)arg1 error:(id*)arg2;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setDuration:(double)arg1;

@end
