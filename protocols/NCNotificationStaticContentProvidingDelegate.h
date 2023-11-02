
@protocol NCNotificationStaticContentProvidingDelegate <NSObject>

@required

- (void)contentProvider:(id <NCNotificationStaticContentProviding>)arg1 performAction:(NCNotificationAction *)arg2 animated:(bool)arg3;

@optional

- (UITraitCollection *)contentProviderTraitCollection:(id <NCNotificationStaticContentProviding>)arg1;

@end
