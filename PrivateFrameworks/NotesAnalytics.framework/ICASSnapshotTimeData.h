
@interface ICASSnapshotTimeData : NSObject <AADataEventType> {
    NSNumber * _lastTimeOfAttemptedSchedule;
}

@property (nonatomic, readonly) NSNumber *lastTimeOfAttemptedSchedule;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithLastTimeOfAttemptedSchedule:(id)arg1;
- (id)lastTimeOfAttemptedSchedule;
- (id)toDict;

@end
