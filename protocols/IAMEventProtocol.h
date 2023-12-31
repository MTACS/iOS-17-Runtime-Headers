
@protocol IAMEventProtocol <NSObject>

@required

- (bool)matchesWithKey:(NSString *)arg1;
- (NSString *)name;
- (long long)type;

@optional

- (NSDictionary *)payload;
- (NSString *)source;
- (id)value;

@end
