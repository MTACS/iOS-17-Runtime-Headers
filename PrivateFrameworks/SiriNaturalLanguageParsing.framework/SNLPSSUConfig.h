
@interface SNLPSSUConfig : NSObject

+ (bool)isInternalInstall;
+ (id)loadAppShortcutAlwaysTriggeredAllowList;
+ (id)loadAppShortcutAlwaysTriggeredAllowListPlist;
+ (id)loadAppShortcutAlwaysTriggeredAllowListUserDefaults;
+ (id)loadPlistArrayFromURL:(id)arg1;

@end
