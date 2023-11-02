
@protocol MGHomeKitAccessoryProtocol <NSObject>

@required

- (NSUUID *)HomeKitAccesoryIdentifier;
- (HMAccessory *)HomeKitAccessoryWithHomeManager:(HMHomeManager *)arg1;

@end
