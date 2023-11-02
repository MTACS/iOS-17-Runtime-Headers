
@protocol HMHAPMetadataCategory <NSObject>

@required

- (NSString *)catDescription;
- (NSNumber *)identifier;
- (void)setCatDescription:(NSString *)arg1;
- (void)setIdentifier:(NSNumber *)arg1;
- (void)setUuidStr:(NSString *)arg1;
- (NSString *)uuidStr;

@end
