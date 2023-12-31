
@protocol SiriCoreSQLiteColumn <NSObject>

@required

- (<SiriCoreSQLiteValue> *)defaultValue;
- (long long)identifier;
- (bool)isNotNull;
- (bool)isPrimaryKey;
- (NSString *)name;
- (NSString *)type;

@end
