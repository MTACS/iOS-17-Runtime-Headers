
@interface BMBiomeTableStore : NSObject <BMTableQuery> {
    NSString * _identifier;
    NSString * _tableName;
    BMTableStore * _tableStore;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *tableName;
@property (nonatomic, retain) BMTableStore *tableStore;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 tableName:(id)arg2;
- (id)initWithURL:(id)arg1 tableName:(id)arg2 identifier:(id)arg3;
- (id)select:(id)arg1;
- (id)selectTableNamed:(id)arg1;
- (void)setTableStore:(id)arg1;
- (id)tableName;
- (id)tableStore;

@end
