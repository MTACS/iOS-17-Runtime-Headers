
@interface CKVDatabaseInsertBuilder : CKVDatabaseCommandBuilder {
    NSArray * _columnNames;
    NSArray * _columnValues;
    unsigned long long  _numberOfColumns;
    NSArray * _returningColumns;
}

- (void).cxx_destruct;
- (bool)_setError:(id*)arg1 withCode:(long long)arg2;
- (id)buildWithError:(id*)arg1;
- (id)initWithTableName:(id)arg1 columnNames:(id)arg2;
- (void)setColumnValues:(id)arg1;
- (void)setReturningColumns:(id)arg1;

@end
