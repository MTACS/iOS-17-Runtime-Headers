
@interface HDSQLiteDatabaseTriggerSchema : NSObject {
    NSString * _name;
    NSString * _sql;
    NSString * _tableName;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *sql;
@property (nonatomic, copy) NSString *tableName;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setSql:(id)arg1;
- (void)setTableName:(id)arg1;
- (id)sql;
- (id)tableName;

@end
