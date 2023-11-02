
@interface ICASSessionDetailArrayItemData : NSObject <AADataEventType> {
    NSNumber * _endTimestamp;
    NSNumber * _sessionDuration;
    ICASSessionType * _sessionType;
    NSNumber * _startTimestamp;
}

@property (nonatomic, readonly) NSNumber *endTimestamp;
@property (nonatomic, readonly) NSNumber *sessionDuration;
@property (nonatomic, readonly) ICASSessionType *sessionType;
@property (nonatomic, readonly) NSNumber *startTimestamp;

+ (id)dataName;

- (void).cxx_destruct;
- (id)endTimestamp;
- (id)initWithSessionType:(id)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 sessionDuration:(id)arg4;
- (id)sessionDuration;
- (id)sessionType;
- (id)startTimestamp;
- (id)toDict;

@end
