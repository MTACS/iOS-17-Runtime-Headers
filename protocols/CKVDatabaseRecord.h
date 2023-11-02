
@protocol CKVDatabaseRecord <NSObject>

@required

+ (NSArray *)genSQLCreateStatements;
+ (id)recordFromDatabaseValueRow:(CKVDatabaseValueRow *)arg1;
+ (NSString *)tableName;

@end
