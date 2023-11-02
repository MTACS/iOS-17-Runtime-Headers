
@interface SGMIDomainCountingTable : NSObject {
    _PASSqliteDatabase * _db;
    _PASLock * _lock;
    NSString * _tableName;
    NSString * _tableNameEscaped;
}

+ (id)_escapedSQLIdentifier:(id)arg1;
+ (void)createTableNamed:(id)arg1 inDatabase:(id)arg2;
+ (id)domainByAppendingToken:(id)arg1 toDomain:(id)arg2;
+ (id)domainForStringTokens:(id)arg1;
+ (id)stringTokensFromDomain:(id)arg1;

- (void).cxx_destruct;
- (void)_addColumn:(id)arg1;
- (void)_commitDomainsAndCounts:(id)arg1 toColumn:(id)arg2;
- (id)_currentColumns;
- (void)_deleteZeroRows;
- (unsigned long long)_domainSegmentCount:(id)arg1;
- (void)_dropColumn:(id)arg1;
- (bool)_hasColumn:(id)arg1;
- (void)_mergeColumn:(id)arg1 intoColumn:(id)arg2;
- (id)_parentDomainsForDomain:(id)arg1;
- (id)_readCurrentColumnsUncached;
- (void)_recycleColumn:(id)arg1 asColumn:(id)arg2;
- (bool)_removeColumnFromTotal:(id)arg1;
- (void)_updateSchemaVersion;
- (bool)_zeroColumn:(id)arg1;
- (void)addColumn:(id)arg1;
- (void)commitDomainsAndCounts:(id)arg1 toColumn:(id)arg2;
- (void)commitDomainsCountedSet:(id)arg1 toColumn:(id)arg2;
- (long long)countForColumn:(id)arg1 domain:(id)arg2;
- (id)currentColumns;
- (void)deleteAllRows;
- (void)deleteDomain:(id)arg1;
- (void)deleteDomainSelection:(id)arg1;
- (void)deleteDomainSelection:(id)arg1 keepingDomainsPassingTest:(id /* block */)arg2;
- (void)dropColumn:(id)arg1;
- (void)enumerateChildrenOfDomain:(id)arg1 depth:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateChildrenOfDomain:(id)arg1 greaterThan:(id)arg2 depth:(unsigned long long)arg3 limit:(id)arg4 usingBlock:(id /* block */)arg5;
- (id)firstNonZeroColumnForDomain:(id)arg1 withColumns:(id)arg2;
- (id)firstNonZeroColumnForDomains:(id)arg1 withColumns:(id)arg2;
- (bool)hasColumn:(id)arg1;
- (id)init;
- (id)initWithDatabase:(id)arg1 tableName:(id)arg2;
- (void)mergeColumn:(id)arg1 intoColumn:(id)arg2;
- (id)nonZeroColumnsForDomain:(id)arg1 withColumns:(id)arg2;
- (id)nonZeroColumnsForDomains:(id)arg1 withColumns:(id)arg2;
- (unsigned long long)numberOfRowsAssociatedWithDomain:(id)arg1;
- (void)recycleColumn:(id)arg1 asColumn:(id)arg2;
- (long long)totalForDomain:(id)arg1;
- (id)totalsForDomains:(id)arg1;
- (void)zeroColumn:(id)arg1;

@end
