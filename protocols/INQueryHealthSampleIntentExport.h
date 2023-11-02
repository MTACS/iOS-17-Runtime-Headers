
@protocol INQueryHealthSampleIntentExport <NSObject, JSExport>

@required

- (long long)expectedResultType;
- (id)init;
- (long long)objectType;
- (long long)questionType;
- (NSArray *)recordDates;
- (void)setExpectedResultType:(long long)arg1;
- (void)setObjectType:(long long)arg1;
- (void)setQuestionType:(long long)arg1;
- (void)setRecordDates:(NSArray *)arg1;
- (void)setThresholdValues:(NSArray *)arg1;
- (void)setUnit:(HKUnit *)arg1;
- (NSArray *)thresholdValues;
- (HKUnit *)unit;

@end
