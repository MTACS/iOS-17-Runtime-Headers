
@interface AMDSQLiteSchema : NSObject {
    NSString * _name;
    NSDictionary * _schemaDict;
    NSDictionary * _streamToTableMap;
    NSDictionary * _tables;
    NSString * _version;
    NSNumber * _versionNumber;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSDictionary *schemaDict;
@property (nonatomic, retain) NSDictionary *streamToTableMap;
@property (nonatomic, retain) NSDictionary *tables;
@property (nonatomic, retain) NSString *version;
@property (nonatomic, retain) NSNumber *versionNumber;

+ (id)fetchColumnSpecsForTable:(id)arg1;

- (void).cxx_destruct;
- (id)getCreateTableStatementFor:(id)arg1;
- (id)getInsertStatementFor:(id)arg1 hasColumns:(id)arg2 requiresColumns:(id*)arg3;
- (id)getName;
- (id)getSchemaDict;
- (id)getSchemaForTable:(id)arg1;
- (id)getStreamToTableMap;
- (id)getTableForStream:(id)arg1;
- (id)getTables;
- (id)getVersion;
- (id)getVersionNumber;
- (id)initWithDict:(id)arg1 error:(id*)arg2;
- (id)name;
- (id)schemaDict;
- (void)setName:(id)arg1;
- (void)setSchemaDict:(id)arg1;
- (void)setStreamToTableMap:(id)arg1;
- (void)setTables:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)setVersionNumber:(id)arg1;
- (id)streamToTableMap;
- (id)tables;
- (id)version;
- (id)versionNumber;

@end
