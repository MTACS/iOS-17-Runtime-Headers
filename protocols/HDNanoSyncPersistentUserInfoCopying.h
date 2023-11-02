
@protocol HDNanoSyncPersistentUserInfoCopying <NSObject>

@required

+ (NSString *)persistentUserInfoKey;
+ (id)retreiveFromPersistentUserInfo:(NSDictionary *)arg1;

- (void)addToPersistentUserInfo:(NSMutableDictionary *)arg1;
- (PBCodable *)copyForPersistentUserInfo;
- (id)initWithData:(NSData *)arg1;

@end
