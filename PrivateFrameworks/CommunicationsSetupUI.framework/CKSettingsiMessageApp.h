
@interface CKSettingsiMessageApp : NSObject {
    NSString * _appBundleID;
    NSString * _appDisplayName;
    bool  _deletable;
    NSString * _extensionBundleID;
    NSString * _extensionDisplayName;
    bool  _isiMessageAppOnly;
}

@property (nonatomic, readonly) NSString *appBundleID;
@property (nonatomic, readonly) NSString *appDisplayName;
@property (getter=isDeletable, readonly) bool deletable;
@property (nonatomic, readonly) NSString *extensionBundleID;
@property (nonatomic, readonly) NSString *extensionDisplayName;
@property (getter=isHiddenInSendMenuByUserPreference) bool hiddenInSendMenuByUserPreference;
@property (nonatomic, readonly) bool isiMessageAppOnly;

- (void).cxx_destruct;
- (id)_hiddenExtensionBundleIdentifiers;
- (void)_setHiddenExtensionBundleIdentifiers:(id)arg1;
- (id)_stringArrayFromUserDefaults:(id)arg1 key:(id)arg2;
- (id)appBundleID;
- (id)appDisplayName;
- (id)extensionBundleID;
- (id)extensionDisplayName;
- (id)initWithExtension:(id)arg1;
- (bool)isDeletable;
- (bool)isHiddenInSendMenuByUserPreference;
- (bool)isiMessageAppOnly;
- (void)setHiddenInSendMenuByUserPreference:(bool)arg1;

@end
