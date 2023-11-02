
@interface HMBModelIndexedQuery : HMBModelUnindexedQuery {
    NSString * _indexNameSuffix;
    NSArray * _indexedColumns;
}

@property (nonatomic, readonly) NSString *indexName;
@property (nonatomic, readonly) NSString *indexNameSuffix;
@property (nonatomic, readonly) NSArray *indexedColumns;

+ (id)queryWithSQLPredicate:(id)arg1 ascending:(bool)arg2 indexedProperties:(id)arg3 arguments:(id)arg4;

- (void).cxx_destruct;
- (bool)hasExpectedIndexes;
- (id)indexName;
- (id)indexNameSuffix;
- (id)indexedColumns;
- (id)initWithSQLPredicate:(id)arg1 sqlColumns:(id)arg2 initialSequence:(id)arg3 maximumRowsPerSelect:(unsigned long long)arg4 indexNameSuffix:(id)arg5 indexedColumns:(id)arg6 arguments:(id)arg7;

@end
