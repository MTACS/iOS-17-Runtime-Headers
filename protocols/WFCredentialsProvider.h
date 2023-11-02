
@protocol WFCredentialsProvider <WFNetworkView>

@required

- (struct __SecIdentity { }*)TLSIdentity;
- (NSString *)password;
- (NSString *)username;

@optional

- (void)receiveSharedPassword:(NSString *)arg1;

@end
