
@interface ML3ProcessClient : ML3Client

+ (id)sharedProcessClient;

- (id)bundleID;
- (id)init;
- (id)name;
- (int)processID;

@end
