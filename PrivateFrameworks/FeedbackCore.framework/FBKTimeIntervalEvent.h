
@interface FBKTimeIntervalEvent : NSObject {
    double  _endTimeInterval;
    unsigned long long  _eventType;
    double  _startTimeInterval;
}

@property (nonatomic) double endTimeInterval;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic) double startTimeInterval;

- (id)description;
- (double)endTimeInterval;
- (unsigned long long)eventType;
- (id)initWithType:(unsigned long long)arg1;
- (void)setEndTimeInterval:(double)arg1;
- (void)setEventType:(unsigned long long)arg1;
- (void)setStartTimeInterval:(double)arg1;
- (double)startTimeInterval;

@end
