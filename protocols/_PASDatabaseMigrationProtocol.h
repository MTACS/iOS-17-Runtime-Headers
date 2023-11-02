
@protocol _PASDatabaseMigrationProtocol <NSObject>

@required

- (_PASSqliteDatabase *)databaseHandle;
- (NSDictionary *)migrations;
- (NSArray *)queriesToSkipFromEmptyToVersion:(unsigned int*)arg1;

@end
