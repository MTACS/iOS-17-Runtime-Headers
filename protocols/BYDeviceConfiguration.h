
@protocol BYDeviceConfiguration <NSObject>

@required

- (NSString *)buildVersion;
- (bool)inStoreDemoMode;
- (NSString *)productVersion;

@end
