
@interface PBFSQLiteInsertQueryBuilder : NSObject <PBFSQLiteQueryBuilder> {
    NSMutableDictionary * _insertDictionary;
    NSString * _tableName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *tableName;

- (void).cxx_destruct;
- (id)appendInsertIntoColumnNamed:(id)arg1 value:(id)arg2;
- (id)build;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithTableName:(id)arg1;
- (id)tableName;

@end
