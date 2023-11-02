
@protocol NCNotificationRequestInlineActionsProviderDelegate <NSObject>

@required

- (void)contentProvider:(id <NCAuxiliaryOptionsProviding>)arg1 performAction:(NCNotificationAction *)arg2 animated:(bool)arg3;

@end
