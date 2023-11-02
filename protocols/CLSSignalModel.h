
@protocol CLSSignalModel <NSObject>

@required

+ (unsigned long long)latestVersion;
+ (NSString *)name;

- (unsigned long long)version;

@end
