
@protocol HUAccessorySettingsProfileModuleDelegate <NSObject>

@required

- (NAFuture *)settingsProfileModule:(HUAccessorySettingsProfileModule *)arg1 wantsProfileItemDeleted:(HUAccessorySettingsProfileItem *)arg2;

@end
