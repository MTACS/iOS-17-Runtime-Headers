
@interface HMDRecordsSavedLogEvent : HMDRecordOperationLogEvent

+ (id)legacyRecordsSaved:(id)arg1;
+ (id)recordsSaved:(id)arg1;

- (id)initWithSavedRecords:(id)arg1 isLegacy:(bool)arg2;

@end
