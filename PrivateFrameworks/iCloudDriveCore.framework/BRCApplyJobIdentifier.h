
@interface BRCApplyJobIdentifier : BRCItemDBRowIDJobIdentifier

- (id)initWithItemDBRowID:(long long)arg1;
- (long long)rank;
- (long long)rejectedRowID;
- (long long)serverItemRank;

@end
