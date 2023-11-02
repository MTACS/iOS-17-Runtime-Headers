
@interface CKVDatabaseDeleteBuilder : CKVDatabaseCommandBuilder {
    NSArray * _returningColumns;
}

- (void).cxx_destruct;
- (id)build;
- (void)setCommandCriterion:(id)arg1;
- (void)setReturningColumns:(id)arg1;

@end
