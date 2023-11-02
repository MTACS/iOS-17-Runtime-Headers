
@interface HDSQLiteDatabaseTableSchema : NSObject {
    NSDictionary * _columns;
    NSString * _createTableSchema;
    NSSet * _indices;
    NSString * _name;
    NSSet * _triggers;
}

@property (nonatomic, retain) NSDictionary *columns;
@property (nonatomic, copy) NSString *createTableSchema;
@property (nonatomic, retain) NSSet *indices;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSSet *triggers;

- (void).cxx_destruct;
- (id)columns;
- (id)createTableSchema;
- (id)description;
- (unsigned long long)hash;
- (id)indices;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setColumns:(id)arg1;
- (void)setCreateTableSchema:(id)arg1;
- (void)setIndices:(id)arg1;
- (void)setName:(id)arg1;
- (void)setTriggers:(id)arg1;
- (id)triggers;

@end
