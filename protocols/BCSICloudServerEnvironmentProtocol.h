
@protocol BCSICloudServerEnvironmentProtocol

@required

- (NSDictionary *)additionalRequestHTTPHeaders;
- (long long)containerEnvironment;
- (NSString *)containerID;
- (long long)type;

@end
