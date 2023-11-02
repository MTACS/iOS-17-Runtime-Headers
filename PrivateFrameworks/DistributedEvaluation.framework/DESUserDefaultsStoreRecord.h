
@interface DESUserDefaultsStoreRecord : NSObject {
    NSString * _recordID;
}

@property (nonatomic, readonly) NSString *completionDateKey;
@property (nonatomic, copy) NSDictionary *debugInfo;
@property (nonatomic, copy) NSDate *lastCompletionDate;
@property (nonatomic, copy) NSNumber *maxTimeLimitInSeconds;
@property (nonatomic) long long performCount;
@property (nonatomic, copy) NSNumber *periodInSeconds;
@property (nonatomic, readonly) NSString *recordID;
@property (nonatomic) bool shouldRegisterXPCActivity;

+ (id)bmltActivatedEventDate;
+ (void)purgeObsoleted;
+ (id)schedulerWakeupPeriodInSeconds;
+ (void)setBmltActivatedEventDate:(id)arg1;
+ (void)setSchedulerWakeupPeriodInSeconds:(id)arg1;

- (void).cxx_destruct;
- (id)completionDateKey;
- (id)debugInfo;
- (id)debugInfoKey;
- (id)description;
- (id)initWithRecordID:(id)arg1;
- (id)lastCompletionDate;
- (id)maxTimeLimitInSeconds;
- (id)maxTimeLimitKey;
- (long long)performCount;
- (id)performCountKey;
- (id)periodInSeconds;
- (id)periodKey;
- (id)recordID;
- (void)setDebugInfo:(id)arg1;
- (void)setLastCompletionDate:(id)arg1;
- (void)setMaxTimeLimitInSeconds:(id)arg1;
- (void)setPerformCount:(long long)arg1;
- (void)setPeriodInSeconds:(id)arg1;
- (void)setShouldRegisterXPCActivity:(bool)arg1;
- (bool)shouldRegisterXPCActivity;
- (id)shouldRegisterXPCActivityKey;

@end
