
@interface SiriTaskConfiguration : NSObject {
    NSString * _eventTime;
    long long  _minDurationInSeconds;
    NSString * _taskName;
    NSString * _taskType;
}

@property (nonatomic, retain) NSString *eventTime;
@property (nonatomic) long long minDurationInSeconds;
@property (nonatomic, retain) NSString *taskName;
@property (nonatomic, retain) NSString *taskType;

- (void).cxx_destruct;
- (id)eventTime;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSONData:(id)arg1;
- (long long)minDurationInSeconds;
- (void)setEventTime:(id)arg1;
- (void)setMinDurationInSeconds:(long long)arg1;
- (void)setTaskName:(id)arg1;
- (void)setTaskType:(id)arg1;
- (id)taskName;
- (id)taskType;

@end
