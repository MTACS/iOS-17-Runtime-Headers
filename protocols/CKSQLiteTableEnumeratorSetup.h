
@protocol CKSQLiteTableEnumeratorSetup

@required

- (void)orderAscendingByProperty:(NSString *)arg1;
- (void)orderDescendingByProperty:(NSString *)arg1;
- (void)setFetchedProperties:(NSArray *)arg1;
- (void)setLimit:(NSNumber *)arg1;
- (void)setOffset:(NSNumber *)arg1;

@end
