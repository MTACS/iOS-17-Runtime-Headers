
@interface HMBModelInfiniteQuery : HMBModelFiniteQuery {
    NSString * _sequenceArgumentName;
}

@property (readonly, copy) NSString *sequenceArgumentName;

+ (id)queryWithSQLPredicate:(id)arg1 sequenceArgumentName:(id)arg2 indexedProperties:(id)arg3 arguments:(id)arg4;

- (void).cxx_destruct;
- (id)initWithSQLPredicate:(id)arg1 sqlColumns:(id)arg2 sequenceArgumentName:(id)arg3 maximumRowsPerSelect:(unsigned long long)arg4 indexNameSuffix:(id)arg5 indexedColumns:(id)arg6 arguments:(id)arg7;
- (id)performQueryOn:(id)arg1 arguments:(id)arg2;
- (id)sequenceArgumentName;

@end
