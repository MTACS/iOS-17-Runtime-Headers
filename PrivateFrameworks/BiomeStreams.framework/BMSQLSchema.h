
@interface BMSQLSchema : NSObject {
    NSArray * _columns;
    NSString * _tableName;
}

@property (nonatomic, readonly) NSArray *columns;
@property (nonatomic, readonly) NSString *tableName;

+ (id)new;

- (void).cxx_destruct;
- (id)columns;
- (id)createTableSQL;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTableName:(id)arg1 columns:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)tableName;

@end
