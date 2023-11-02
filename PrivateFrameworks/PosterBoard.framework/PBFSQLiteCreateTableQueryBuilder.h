
@interface PBFSQLiteCreateTableQueryBuilder : NSObject <PBFSQLiteQueryBuilder> {
    NSMutableArray * _columns;
    bool  _createIfNotExists;
    bool  _isTemporary;
    bool  _isTypeCheckingStrict;
    NSString * _tableName;
}

@property (nonatomic) bool createIfNotExists;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTemporary;
@property (nonatomic) bool isTypeCheckingStrict;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *tableName;

- (void).cxx_destruct;
- (id)appendColumnNamed:(id)arg1 type:(unsigned long long)arg2;
- (id)appendColumnNamed:(id)arg1 type:(unsigned long long)arg2 constraints:(unsigned long long)arg3;
- (id)build;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createIfNotExists;
- (id)initWithTableName:(id)arg1;
- (bool)isTemporary;
- (bool)isTypeCheckingStrict;
- (void)setCreateIfNotExists:(bool)arg1;
- (void)setIsTemporary:(bool)arg1;
- (void)setIsTypeCheckingStrict:(bool)arg1;
- (id)tableName;

@end
