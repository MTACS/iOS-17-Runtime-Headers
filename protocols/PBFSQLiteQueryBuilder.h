
@protocol PBFSQLiteQueryBuilder <NSObject, NSCopying>

@required

- (NSString *)build;
- (NSString *)tableName;

@end
