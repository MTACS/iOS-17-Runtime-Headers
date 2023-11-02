
@interface ML3DaemonClient : ML3Client

+ (id)sharedDaemonClient;

- (id)bundleID;
- (id)init;
- (id)name;
- (int)processID;

@end
