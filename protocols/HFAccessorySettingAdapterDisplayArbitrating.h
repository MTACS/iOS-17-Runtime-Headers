
@protocol HFAccessorySettingAdapterDisplayArbitrating <NSObject>

@required

- (bool)shouldShowSettingsEntity:(HFAccessorySettingsEntity *)arg1;

@optional

- (void)configureSection:(HFMutableItemSection *)arg1 forEntity:(HFAccessorySettingsEntity *)arg2;
- (NSArray *)customizeSections:(NSArray *)arg1 forEntity:(HFAccessorySettingsEntity *)arg2;

@end
