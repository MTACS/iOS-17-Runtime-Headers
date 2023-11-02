
@protocol WDMedicalRecordSummarizable <NSObject>

@required

- (void)addMedicalRecord:(HKMedicalRecord *)arg1;
- (NSArray *)displayItems;
- (void)recomputeIfNeeded;
- (void)setNeedsRecompute;
- (void)showTruncatedRecords;
- (NSString *)summarySortString;

@end
