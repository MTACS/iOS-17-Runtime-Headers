
@interface FCModifyUserInfoCommand : FCModifyRecordsCommand

+ (id)desiredKeys;

- (id)initWithUserInfoRecord:(id)arg1;
- (bool)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2;

@end
