
@interface WFSharingSettings : NSObject

+ (bool)isPrivateSharingEnabled;
+ (id)privateSharingDisabledAlertWithShortcutName:(id)arg1;
+ (id)privateSharingDisabledErrorWithShortcutName:(id)arg1;
+ (id)sharingDisabledAlertWithShortcutName:(id)arg1;
+ (id)sharingDisabledAlertWithWorkflowName:(id)arg1;
+ (bool)sharingEnabled;
+ (id)shortcutFileSharingDisabledAlert;
+ (id)shortcutFileSharingDisabledError;
+ (bool)shortcutFileSharingEnabled;

@end
