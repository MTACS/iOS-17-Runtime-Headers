
@protocol EDSearchableIndexVerifierDataSource <NSObject>

@required

- (NSString *)bundleIDForSearchableIndexVerifier:(EDSearchableIndexVerifier *)arg1;
- (NSDictionary *)dataSamplesForSearchableIndexVerifier:(EDSearchableIndexVerifier *)arg1 searchableIndex:(EDSearchableIndex *)arg2 count:(unsigned long long)arg3 lastVerifiedMessageID:(long long)arg4;
- (NSSet *)knownTransactionIDsForSearchableIndexVerifier:(EDSearchableIndexVerifier *)arg1;
- (EDSearchableIndex *)searchableIndexForSearchableIndexVerifier:(EDSearchableIndexVerifier *)arg1;

@end
