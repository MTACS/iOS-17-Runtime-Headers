
@interface FCModifyPuzzleTypeSettingsCommand : FCModifyRecordsCommand

+ (id)desiredKeys;

- (id)initWithPuzzleTypeSettingsEntries:(id)arg1 merge:(bool)arg2;
- (bool)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2;

@end
