
@protocol EMAccountBuilder <NSObject>

@required

- (NSString *)hostname;
- (bool)isPrimaryiCloudAccount;
- (void)setHostname:(NSString *)arg1;
- (void)setPrimaryiCloudAccount:(bool)arg1;
- (void)setUsername:(NSString *)arg1;
- (NSString *)username;

@end
