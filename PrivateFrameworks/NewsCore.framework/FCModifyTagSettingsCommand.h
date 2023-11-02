
@interface FCModifyTagSettingsCommand : FCModifyRecordsCommand

+ (id)desiredKeys;

- (id)initWithTagSettingsEntries:(id)arg1 merge:(bool)arg2;
- (bool)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2;

@end
