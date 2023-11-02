
@protocol DEDEncryptor <NSObject>

@required

- (NSURL *)encryptLogsAtPath:(NSURL *)arg1 outputDirectory:(NSURL *)arg2 withMetadata:(NSDictionary *)arg3;
- (NSURL *)encryptLogsAtPath:(NSURL *)arg1 outputDirectory:(NSURL *)arg2 withPublicKey:(NSString *)arg3;

@end
