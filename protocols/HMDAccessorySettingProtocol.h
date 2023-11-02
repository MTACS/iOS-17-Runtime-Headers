
@protocol HMDAccessorySettingProtocol <NSObject>

@required

- (NSArray *)constraints;
- (NSString *)name;
- (long long)type;
- (id)value;

@end
