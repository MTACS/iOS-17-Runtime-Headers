
@interface CKVDatabaseUpdateBuilder : CKVDatabaseCommandBuilder {
    NSMutableArray * _columnNames;
    NSMutableArray * _columnValues;
    NSArray * _returningColumns;
}

- (void).cxx_destruct;
- (id)build;
- (id)initWithTableName:(id)arg1;
- (void)setCommandCriterion:(id)arg1;
- (void)setReturningColumns:(id)arg1;
- (void)setValue:(id)arg1 forColumn:(id)arg2;

@end
