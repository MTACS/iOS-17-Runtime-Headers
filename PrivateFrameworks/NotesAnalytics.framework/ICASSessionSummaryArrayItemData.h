
@interface ICASSessionSummaryArrayItemData : NSObject <AADataEventType> {
    NSNumber * _sessionCount;
    NSNumber * _sessionDuration;
    ICASSessionType * _sessionType;
}

@property (nonatomic, readonly) NSNumber *sessionCount;
@property (nonatomic, readonly) NSNumber *sessionDuration;
@property (nonatomic, readonly) ICASSessionType *sessionType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithSessionType:(id)arg1 sessionDuration:(id)arg2 sessionCount:(id)arg3;
- (id)sessionCount;
- (id)sessionDuration;
- (id)sessionType;
- (id)toDict;

@end
