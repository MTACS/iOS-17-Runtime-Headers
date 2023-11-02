
@interface NSSQLRTreeIndex : NSSQLIndex {
    NSString * _tableName;
}

- (id)bulkUpdateStatementsForStore:(id)arg1;
- (void)dealloc;
- (id)dropStatementsForStore:(id)arg1;
- (id)generateStatementsForStore:(id)arg1;
- (id)initForIndexDescription:(id)arg1 sqlEntity:(id)arg2;

@end
