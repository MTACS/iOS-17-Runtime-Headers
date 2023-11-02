
@protocol MTIDSecretStore <NSObject>

@required

- (void)clearLocalData;
- (MTPromise *)resetSchemes:(NSArray *)arg1 options:(NSDictionary *)arg2;
- (MTPromise *)secretForScheme:(MTIDScheme *)arg1 options:(NSDictionary *)arg2;
- (MTPromise *)syncForSchemes:(NSArray *)arg1 options:(NSDictionary *)arg2;

@optional

- (NSDictionary *)debugInfo;
- (MTPromise *)maintainSchemes:(NSArray *)arg1 options:(NSDictionary *)arg2;

@end
