
@interface AMDSQLiteTableSchema : NSObject {
    NSDictionary * _columns;
    NSString * _name;
    NSSet * _requiredColumns;
}

@property (nonatomic, retain) NSDictionary *columns;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSSet *requiredColumns;

- (void).cxx_destruct;
- (id)columns;
- (id)getColumns;
- (id)getCreateTableStatement;
- (id)getInsertStatement:(id)arg1;
- (id)getRequiredColumns;
- (id)getSpecForColumn:(id)arg1;
- (id)initWithDict:(id)arg1 withName:(id)arg2 error:(id*)arg3;
- (id)name;
- (id)requiredColumns;
- (void)setColumns:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRequiredColumns:(id)arg1;

@end
