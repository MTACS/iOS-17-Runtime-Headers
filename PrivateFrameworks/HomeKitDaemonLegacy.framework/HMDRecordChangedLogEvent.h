
@interface HMDRecordChangedLogEvent : HMDRecordOperationLogEvent

+ (id)legacyRecordChanged:(id)arg1;
+ (id)recordChanged:(id)arg1;

- (id)initWithChangedRecord:(id)arg1 isLegacy:(bool)arg2;

@end
