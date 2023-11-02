
@interface UIApplicationShortcutItem : NSObject <BSXPCCoding, NSCopying, NSMutableCopying> {
    unsigned long long  _activationMode;
    UIApplicationShortcutIcon * _icon;
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
    id  _targetContentIdentifier;
    NSString * _type;
    NSData * _userInfoData;
}

@property (nonatomic, readonly) unsigned long long activationMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIApplicationShortcutIcon *icon;
@property (nonatomic, copy) NSString *localizedSubtitle;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, readonly, copy) SBSApplicationShortcutItem *sbsShortcutItem;
@property (readonly) Class superclass;
@property (nonatomic, copy) id targetContentIdentifier;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, copy) NSData *userInfoData;

+ (unsigned long long)_sbsActivationModeFromUIActivationMode:(unsigned long long)arg1;
+ (unsigned long long)_uiActivationModeFromSBSActivationMode:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_initWithType:(id)arg1 localizedTitle:(id)arg2 localizedSubtitle:(id)arg3 icon:(id)arg4 userInfoData:(id)arg5 activationMode:(unsigned long long)arg6 targetContentIdentifier:(id)arg7;
- (unsigned long long)activationMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)icon;
- (id)init;
- (id)initWithSBSApplicationShortcutItem:(id)arg1;
- (id)initWithType:(id)arg1 localizedTitle:(id)arg2;
- (id)initWithType:(id)arg1 localizedTitle:(id)arg2 localizedSubtitle:(id)arg3 icon:(id)arg4 userInfo:(id)arg5;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)sbsShortcutItem;
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

@end
