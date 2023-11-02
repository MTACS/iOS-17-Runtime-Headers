
@protocol DEDDeviceLike <NSObject>

@required

- (void)addDevice:(DEDDevice *)arg1;
- (NSString *)build;
- (NSString *)color;
- (NSString *)deviceClass;
- (bool)hasCapabilities:(NSSet *)arg1;
- (NSString *)hashingKey;
- (NSString *)identifier;
- (bool)isCurrentDevice;
- (bool)isEqualToDevice:(FBKGroupedDevice *)arg1;
- (bool)isLikeDEDDevice:(DEDDevice *)arg1;
- (NSString *)name;
- (NSString *)platform;
- (NSString *)productType;
- (NSString *)publicLogDescription;
- (NSDictionary *)serialize;
- (NSString *)shortDescription;

@end
