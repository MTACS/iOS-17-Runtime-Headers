
@protocol HMDSettingBaseProtocol <NSObject, NSSecureCoding>

@required

- (NSUUID *)identifier;
- (NSString *)name;
- (NSUUID *)parentIdentifier;

@end
