
@protocol WFOtherNetworkProvider <WFCredentialsProvider>

@required

- (NSString *)SSID;

@optional

- (id)WAPIIdentity;
- (id)WAPIRootCertificate;
- (NSString *)activityString;
- (bool)joining;
- (long long)securityMode;
- (void)setActivityString:(NSString *)arg1;
- (void)setJoining:(bool)arg1;

@end
