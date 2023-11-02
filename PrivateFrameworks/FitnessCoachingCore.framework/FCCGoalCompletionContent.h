
@interface FCCGoalCompletionContent : NSObject <FCCDataSerializable> {
    long long  _activitySummaryIndex;
    NSArray * _completedGoalTypes;
    NSString * _identifier;
}

@property (nonatomic, readonly) long long activitySummaryIndex;
@property (nonatomic, readonly, copy) NSArray *completedGoalTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)activitySummaryIndex;
- (id)completedGoalTypes;
- (id)description;
- (id)identifier;
- (id)initWithActivitySummaryIndex:(long long)arg1 identifier:(id)arg2 completedGoalTypes:(id)arg3;
- (id)initWithTransportData:(id)arg1;
- (id)transportData;

@end
