
@interface LNDailyRoutineRelevantCondition : LNRelevantCondition {
    long long  _situation;
}

@property (nonatomic, readonly) long long situation;

- (id)initWithSituation:(long long)arg1;
- (long long)situation;

@end
