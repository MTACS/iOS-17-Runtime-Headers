
@interface PSSpecifier : NSObject <FASpecifierProtocol> {
    SEL  _buttonAction;
    SEL  _confirmationAction;
    SEL  _confirmationAlternateAction;
    SEL  _confirmationCancelAction;
    SEL  _controllerLoadAction;
    NSString * _name;
    NSMutableDictionary * _properties;
    NSDictionary * _shortTitleDict;
    bool  _showContentString;
    NSDictionary * _titleDict;
    id  _userInfo;
    NSArray * _values;
    id  _weakUserInfo;
    SEL  action;
    long long  autoCapsType;
    long long  autoCorrectionType;
    SEL  cancel;
    long long  cellType;
    Class  detailControllerClass;
    Class  editPaneClass;
    SEL  getter;
    long long  keyboardType;
    SEL  setter;
    id  target;
    unsigned long long  textFieldType;
}

@property (nonatomic, retain) IMAccount *CNFRegAccount;
@property (nonatomic, retain) CNFRegAlias *CNFRegAlias;
@property (nonatomic, retain) CNFRegAlias *CNFRegCallerIdAlias;
@property (nonatomic) SEL buttonAction;
@property (nonatomic) long long cellType;
@property (nonatomic) SEL confirmationAction;
@property (nonatomic) SEL confirmationAlternateAction;
@property (nonatomic) SEL confirmationCancelAction;
@property (nonatomic) SEL controllerLoadAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) Class detailControllerClass;
@property (nonatomic) Class editPaneClass;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSDictionary *shortTitleDictionary;
@property (nonatomic) bool showContentString;
@property (nonatomic) bool sui_boolValue;
@property (nonatomic, readonly, copy) NSString *sui_detailString;
@property (nonatomic, readonly, copy) NSString *sui_footerString;
@property (nonatomic, readonly) UIImage *sui_image;
@property (nonatomic, readonly) bool sui_isUserInteractive;
@property (nonatomic, readonly) bool sui_prefersSubtitleAppearance;
@property (nonatomic, readonly, copy) NSString *sui_titleString;
@property (readonly) Class superclass;
@property (nonatomic) id target;
@property (nonatomic, retain) NSDictionary *titleDictionary;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *tps_subscriptionContext;
@property (nonatomic, readonly, copy) NSOrderedSet *tps_subscriptions;
@property (nonatomic, retain) id userInfo;
@property (nonatomic, retain) NSArray *values;
@property (nonatomic) id weakUserInfo;

// Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences

+ (long long)autoCapsTypeForString:(id)arg1;
+ (long long)autoCorrectionTypeForNumber:(id)arg1;
+ (id)deleteButtonSpecifierWithName:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)emptyGroupSpecifier;
+ (id)groupSpecifierWithID:(id)arg1;
+ (id)groupSpecifierWithID:(id)arg1 name:(id)arg2;
+ (id)groupSpecifierWithName:(id)arg1;
+ (long long)keyboardTypeForString:(id)arg1;
+ (id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7;
+ (id)specifierWithSpecifier:(id)arg1;

- (void).cxx_destruct;
- (void)_addLinkSpec:(id)arg1;
- (void)addFooterHyperlinkWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 target:(id)arg2 action:(SEL)arg3;
- (void)addFooterHyperlinkWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 url:(id)arg2;
- (SEL)buttonAction;
- (long long)cellType;
- (SEL)confirmationAction;
- (SEL)confirmationAlternateAction;
- (SEL)confirmationCancelAction;
- (SEL)controllerLoadAction;
- (id)description;
- (Class)detailControllerClass;
- (Class)editPaneClass;
- (bool)hasValidGetter;
- (bool)hasValidSetter;
- (id)identifier;
- (id)init;
- (id)initWithName:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7;
- (bool)isEqualToSpecifier:(id)arg1;
- (SEL)legacyAction;
- (SEL)legacyCancel;
- (void)loadValuesAndTitlesFromDataSource;
- (id)name;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)performButtonAction;
- (void)performConfirmationAction;
- (void)performConfirmationAlternateAction;
- (void)performConfirmationCancelAction;
- (void)performControllerLoadAction;
- (id)performGetter;
- (void)performLegacyAction;
- (void)performSetterWithValue:(id)arg1;
- (id)properties;
- (id)propertyForKey:(id)arg1;
- (void)removePropertyForKey:(id)arg1;
- (void)setButtonAction:(SEL)arg1;
- (void)setCellType:(long long)arg1;
- (void)setConfirmationAction:(SEL)arg1;
- (void)setConfirmationAlternateAction:(SEL)arg1;
- (void)setConfirmationCancelAction:(SEL)arg1;
- (void)setControllerLoadAction:(SEL)arg1;
- (void)setDetailControllerClass:(Class)arg1;
- (void)setEditPaneClass:(Class)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeyboardType:(long long)arg1 autoCaps:(long long)arg2 autoCorrection:(long long)arg3;
- (void)setLegacyAction:(SEL)arg1;
- (void)setLegacyCancel:(SEL)arg1;
- (void)setName:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setProperties:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setShortTitleDictionary:(id)arg1;
- (void)setShowContentString:(bool)arg1;
- (void)setTarget:(id)arg1;
- (void)setTitleDictionary:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setValues:(id)arg1;
- (void)setValues:(id)arg1 titles:(id)arg2;
- (void)setValues:(id)arg1 titles:(id)arg2 shortTitles:(id)arg3;
- (void)setValues:(id)arg1 titles:(id)arg2 shortTitles:(id)arg3 usingLocalizedTitleSorting:(bool)arg4;
- (void)setWeakUserInfo:(id)arg1;
- (void)setupIconImageWithBundle:(id)arg1;
- (void)setupIconImageWithPath:(id)arg1;
- (id)shortTitleDictionary;
- (bool)showContentString;
- (id)target;
- (long long)titleCompare:(id)arg1;
- (id)titleDictionary;
- (id)userInfo;
- (id)values;
- (id)weakUserInfo;

// Image: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities

+ (id)ax_stepperSpecifierWithDelegate:(id)arg1;

- (void)ax_setStepperDelegate:(id)arg1;
- (id)ax_stepperDelegate;

// Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI

+ (id)_bundle;
+ (id)acui_iconForDataclass:(id)arg1;
+ (id)acui_linkListCellSpecifierForDataclass:(id)arg1 account:(id)arg2 target:(id)arg3 set:(SEL)arg4 get:(SEL)arg5 detail:(Class)arg6;
+ (id)acui_linkListCellSpecifierForDataclass:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5;
+ (id)acui_specifierForAppWithBundleID:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4;
+ (id)acui_specifierForDataclass:(id)arg1 account:(id)arg2 target:(id)arg3 set:(SEL)arg4 get:(SEL)arg5;
+ (id)acui_specifierForDataclass:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4;
+ (id)acui_specifierIconForAccountTypeIdentifier:(id)arg1;
+ (id)circularImageFromCGImage:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
+ (id)groupSpecifierWithFooterLinkButton:(id)arg1;
+ (id)groupSpecifierWithFooterText:(id)arg1 linkButton:(id)arg2;
+ (id)groupSpecifierWithFooterText:(id)arg1 linkButtons:(id)arg2;
+ (id)groupSpecifierWithHeader:(id)arg1 footer:(id)arg2;
+ (id)groupSpecifierWithHeader:(id)arg1 footer:(id)arg2 linkButtons:(id)arg3;

- (id)_switchSpinnerTimer;
- (id)acui_appBundleID;
- (id)acui_dataclass;

// Image: /System/Library/PrivateFrameworks/CarouselPreferenceServices.framework/CarouselPreferenceServices

- (id)app;
- (void)cslprf_setSettings:(id)arg1;
- (id)cslprf_settings;
- (void)setApp:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI

- (id)CNFRegAccount;
- (id)CNFRegAlias;
- (id)CNFRegCallerIdAlias;
- (void)setCNFRegAccount:(id)arg1;
- (void)setCNFRegAlias:(id)arg1;
- (void)setCNFRegCallerIdAlias:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI

- (void)fl_startSpinner;
- (void)fl_stopSpinner;

// Image: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI

+ (id)buttonSpecifierWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 confirmationInfo:(id)arg4;
+ (id)switchSpecifierWithTitle:(id)arg1 target:(id)arg2 setter:(SEL)arg3 getter:(SEL)arg4 key:(id)arg5;

// Image: /System/Library/PrivateFrameworks/MusicSettingsSupport.framework/MusicSettingsSupport

- (void)_music_specifierButtonAction:(id)arg1;
- (id)_music_specifierGetter;
- (void)_music_specifierSetter:(id)arg1;
- (bool)music_areDisplayValuesEqual:(id)arg1;
- (id)music_copy;
- (id)music_getValue;

// Image: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI

+ (id)st_emptyGroupSpecifier;

- (void)st_startSpinner;
- (void)st_stopSpinner;

// Image: /System/Library/PrivateFrameworks/Settings/SettingsUIKitPrivate.framework/SettingsUIKitPrivate

- (long long)suikp_autoCapsType;
- (long long)suikp_autoCorrectionType;
- (long long)suikp_keyboardType;

// Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI

- (bool)isRATModeSpecifier;

// Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings

- (void)setVersionLabelEnabled:(bool)arg1;
- (bool)versionLabelEnabled;

// Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences

- (id)tps_subscriptionContext;
- (id)tps_subscriptions;

// Image: /System/Library/PrivateFrameworks/ThirdPartyApplicationSettings.framework/ThirdPartyApplicationSettings

- (void)setSui_boolValue:(bool)arg1;
- (bool)sui_boolValue;
- (id)sui_createCellInstance;
- (id)sui_detailString;
- (id)sui_footerString;
- (id)sui_image;
- (bool)sui_isUserInteractive;
- (void)sui_loadValueFromCell;
- (bool)sui_prefersSubtitleAppearance;
- (id)sui_titleString;

@end
