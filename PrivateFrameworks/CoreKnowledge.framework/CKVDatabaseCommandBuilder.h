
@interface CKVDatabaseCommandBuilder : NSObject {
    CKVSQLCommandCriterion * _criterion;
    NSString * _tableName;
}

@property (nonatomic, readonly) CKVSQLCommandCriterion *criterion;
@property (nonatomic, readonly) NSString *tableName;

- (void).cxx_destruct;
- (id)criterion;
- (id)init;
- (id)initWithTableName:(id)arg1;
- (void)setCommandCriterion:(id)arg1;
- (id)tableName;

@end
