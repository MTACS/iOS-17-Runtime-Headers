
@protocol HFAccessorySettingsManagerProtocol <NSObject>

@optional

- (id)initWithSettingsController:(HMAccessorySettingsController *)arg1 accessoryIdentifier:(NSUUID *)arg2 home:(HMHome *)arg3;
- (id)initWithSettingsController:(HMAccessorySettingsController *)arg1 sourceItem:(id <HFServiceLikeItem>)arg2 home:(HMHome *)arg3;

@end
