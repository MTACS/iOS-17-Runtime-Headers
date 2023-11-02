
@interface CKSQLiteTOCTableEntry : CKSQLiteTableEntry {
    NSString * _creatingClass;
    NSString * _creator;
    NSString * _dbTableName;
    NSNumber * _dbVersion;
    NSNumber * _groupID;
    NSString * _logicalTableName;
    NSDictionary * _propertyData;
    NSString * _schema;
    NSNumber * _tableID;
}

@property (nonatomic, copy) NSString *creatingClass;
@property (nonatomic, retain) NSString *creator;
@property (nonatomic, copy) NSString *dbTableName;
@property (nonatomic, retain) NSNumber *dbVersion;
@property (nonatomic, retain) NSNumber *groupID;
@property (nonatomic, copy) NSString *logicalTableName;
@property (nonatomic, retain) NSDictionary *propertyData;
@property (nonatomic, copy) NSString *schema;
@property (nonatomic, retain) NSNumber *tableID;

- (void).cxx_destruct;
- (id)creatingClass;
- (id)creator;
- (id)dbTableName;
- (id)dbVersion;
- (id)groupID;
- (id)logicalTableName;
- (id)propertyData;
- (id)schema;
- (void)setCreatingClass:(id)arg1;
- (void)setCreator:(id)arg1;
- (void)setDbTableName:(id)arg1;
- (void)setDbVersion:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setLogicalTableName:(id)arg1;
- (void)setPropertyData:(id)arg1;
- (void)setSchema:(id)arg1;
- (void)setTableID:(id)arg1;
- (id)tableID;

@end
