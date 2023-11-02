
@interface SBSApplicationShortcutItem : NSObject <BSXPCCoding, NSCopying> {
    unsigned long long  _activationMode;
    NSString * _bundleIdentifierToLaunch;
    SBSApplicationShortcutIcon * _icon;
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
    NSString * _targetContentIdentifier;
    NSString * _type;
    NSData * _userInfoData;
}

@property (nonatomic) unsigned long long activationMode;
@property (nonatomic, retain) UIView *badgeView;
@property (nonatomic, copy) NSString *bundleIdentifierToLaunch;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) SBSApplicationShortcutIcon *icon;
@property (nonatomic, copy) NSString *localizedSubtitle;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, readonly) bool sbh_isDestructive;
@property (nonatomic, readonly) bool sbh_isShortcutDeleteOrRemove;
@property (nonatomic, readonly) bool sbh_isShortcutSpringBoardOnly;
@property (nonatomic, readonly) unsigned long long sbh_shortcutSection;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *targetContentIdentifier;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, retain) NSData *userInfoData;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

+ (id)_staticApplicationShortcutItemsFromInfoPlistEntry:(id)arg1;

- (void).cxx_destruct;
- (void)_localizeWithHandler:(id /* block */)arg1;
- (unsigned long long)activationMode;
- (id)bundleIdentifierToLaunch;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)icon;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (void)setActivationMode:(unsigned long long)arg1;
- (void)setBundleIdentifierToLaunch:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setLocalizedSubtitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setTargetContentIdentifier:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUserInfoData:(id)arg1;
- (id)targetContentIdentifier;
- (id)type;
- (id)userInfo;
- (id)userInfoData;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

- (id)_assetManager;
- (id)_darkMonogrammer;
- (id)_lightMonogrammer;
- (id)_monogrammerForKey:(char *)arg1 style:(long long)arg2;
- (void)_setupAssetManagerWithApplicationBundleURL:(id)arg1;
- (id)badgeView;
- (void)sb_buildIconImageWithApplicationBundleURL:(id)arg1 image:(id*)arg2 systemImageName:(id*)arg3;
- (bool)sbh_isDestructive;
- (bool)sbh_isShortcutDeleteOrRemove;
- (bool)sbh_isShortcutSpringBoardOnly;
- (unsigned long long)sbh_shortcutSection;
- (void)setBadgeView:(id)arg1;

@end
