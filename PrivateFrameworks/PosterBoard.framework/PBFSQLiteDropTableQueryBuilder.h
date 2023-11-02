
@interface PBFSQLiteDropTableQueryBuilder : NSObject <PBFSQLiteQueryBuilder> {
    bool  _dropIfNotExists;
    NSString * _tableName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dropIfNotExists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *tableName;

- (void).cxx_destruct;
- (id)build;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)dropIfNotExists;
- (id)initWithTableName:(id)arg1;
- (void)setDropIfNotExists:(bool)arg1;
- (id)tableName;

@end
