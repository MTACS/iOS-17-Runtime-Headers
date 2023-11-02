
@interface CKVDatabaseSelectBuilder : CKVDatabaseCommandBuilder {
    NSArray * _columns;
    bool  _count;
    CKVSQLCommandJoin * _join;
    NSNumber * _limit;
    NSNumber * _offset;
    CKVSQLCommandOrder * _order;
}

- (void).cxx_destruct;
- (id)build;
- (id)initWithTableName:(id)arg1;
- (void)setColumns:(id)arg1;
- (void)setColumns:(id)arg1 withTablePrefixes:(id)arg2;
- (void)setCommandCriterion:(id)arg1;
- (void)setCommandOrder:(id)arg1;
- (void)setCount:(bool)arg1;
- (void)setJoinWithTable:(id)arg1 joinCriterion:(id)arg2;
- (void)setLimit:(id)arg1;
- (void)setOffset:(id)arg1;

@end
