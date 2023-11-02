
@protocol DICHomeManagerDelegate <NSObject>

@optional

- (void)accessoryDidUpdateControllable:(HMAccessory *)arg1;
- (void)accessoryDidUpdateName:(HMAccessory *)arg1;
- (void)accessoryDidUpdateSupportedCapabilities:(HMAccessory *)arg1;
- (void)didAddHome:(HMHome *)arg1;
- (void)didRemoveHome:(HMHome *)arg1;
- (void)home:(HMHome *)arg1 didAddAccessory:(HMAccessory *)arg2;
- (void)home:(HMHome *)arg1 didAddUser:(HMUser *)arg2;
- (void)home:(HMHome *)arg1 didRemoveAccessory:(HMAccessory *)arg2;
- (void)home:(HMHome *)arg1 didRemoveUser:(HMUser *)arg2;
- (void)home:(HMHome *)arg1 didUpdateAccessControlForUser:(HMUser *)arg2;
- (void)homeDidUpdateAccessControlForCurrentUser:(HMHome *)arg1;

@end
