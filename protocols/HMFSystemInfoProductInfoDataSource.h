
@protocol HMFSystemInfoProductInfoDataSource <NSObject>

@required

- (NSString *)modelIdentifier;
- (long long)productClass;
- (long long)productPlatform;
- (long long)productVariant;

@end
