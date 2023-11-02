
@interface CERecommendationActionCache : NSObject {
    NSUserDefaults * _defaults;
}

@property (nonatomic, retain) NSUserDefaults *defaults;

- (void).cxx_destruct;
- (void)_clearAction:(id)arg1 tableName:(id)arg2;
- (id)_timestamp:(id)arg1 tableName:(id)arg2;
- (void)_trackAction:(id)arg1 tableName:(id)arg2;
- (void)clearLastDismissed:(id)arg1;
- (id)defaults;
- (void)flushCache;
- (id)init;
- (id)lastDismissedTimestamp:(id)arg1;
- (void)setDefaults:(id)arg1;
- (id)timestampForLastCanceled:(id)arg1;
- (id)timestampForLastCompleted:(id)arg1;
- (void)trackActionCanceledForRecommendation:(id)arg1;
- (void)trackActionCompletedForRecommendation:(id)arg1;
- (void)trackActionDismissedForRecommendation:(id)arg1;

@end
