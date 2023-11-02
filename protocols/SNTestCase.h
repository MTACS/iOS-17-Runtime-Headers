
@protocol SNTestCase <SNTestSetup>

@required

- (unsigned long long)aggregate;
- (NSString *)testName;
- (double)timeoutInSeconds;

@optional

- (NSArray *)requiredCapabilities;

@end
