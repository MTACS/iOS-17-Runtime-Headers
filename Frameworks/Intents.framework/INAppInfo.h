
@interface INAppInfo : NSObject <NSSecureCoding> {
    NSSet * _actionsRestrictedWhileLocked;
    NSSet * _actionsRestrictedWhileProtectedDataUnavailable;
    NSString * _applicationIdentifier;
    NSString * _companionApplicationIdentifier;
    NSArray * _counterpartIdentifiers;
    NSSet * _definedIntents;
    NSString * _developmentRegion;
    bool  _requiresAppLaunchPreflight;
    NSSet * _supportedActions;
    NSSet * _supportedActionsByExtensions;
    NSSet * _supportedIntents;
    NSSet * _supportedIntentsByApp;
    NSDictionary * _supportedIntentsGroupedByExtensionPoints;
    NSSet * _supportedMediaCategories;
    bool  _supportsMultiwindow;
}

@property (nonatomic, copy) NSSet *actionsRestrictedWhileLocked;
@property (nonatomic, copy) NSSet *actionsRestrictedWhileProtectedDataUnavailable;
@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSString *companionApplicationIdentifier;
@property (nonatomic, copy) NSArray *counterpartIdentifiers;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, copy) NSSet *definedIntents;
@property (nonatomic, copy) NSString *developmentRegion;
@property (getter=isRequiresAppLaunchPreflight, nonatomic) bool requiresAppLaunchPreflight;
@property (nonatomic, copy) NSSet *supportedActions;
@property (nonatomic, copy) NSSet *supportedActionsByExtensions;
@property (nonatomic, copy) NSSet *supportedIntents;
@property (nonatomic, copy) NSSet *supportedIntentsByApp;
@property (nonatomic, copy) NSDictionary *supportedIntentsGroupedByExtensionPoints;
@property (nonatomic, copy) NSSet *supportedMediaCategories;
@property (nonatomic) bool supportsMultiwindow;

+ (id)_appInfoWithApplicationRecord:(id)arg1 applicationExtensionRecords:(id)arg2 userActivityTypes:(id)arg3;
+ (id)appInfoWithAppProxy:(id)arg1;
+ (id)appInfoWithApplicationRecord:(id)arg1;
+ (id)appInfoWithData:(id)arg1 error:(id*)arg2;
+ (id)appInfoWithIntent:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionsRestrictedWhileLocked;
- (id)actionsRestrictedWhileProtectedDataUnavailable;
- (id)applicationIdentifier;
- (id)companionApplicationIdentifier;
- (id)counterpartIdentifiers;
- (id)data;
- (id)definedIntents;
- (id)developmentRegion;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isRequiresAppLaunchPreflight;
- (void)setActionsRestrictedWhileLocked:(id)arg1;
- (void)setActionsRestrictedWhileProtectedDataUnavailable:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setCompanionApplicationIdentifier:(id)arg1;
- (void)setCounterpartIdentifiers:(id)arg1;
- (void)setDefinedIntents:(id)arg1;
- (void)setDevelopmentRegion:(id)arg1;
- (void)setRequiresAppLaunchPreflight:(bool)arg1;
- (void)setSupportedActions:(id)arg1;
- (void)setSupportedActionsByExtensions:(id)arg1;
- (void)setSupportedIntents:(id)arg1;
- (void)setSupportedIntentsByApp:(id)arg1;
- (void)setSupportedIntentsGroupedByExtensionPoints:(id)arg1;
- (void)setSupportedMediaCategories:(id)arg1;
- (void)setSupportsMultiwindow:(bool)arg1;
- (id)supportedActions;
- (id)supportedActionsByExtensions;
- (id)supportedIntents;
- (id)supportedIntentsByApp;
- (id)supportedIntentsGroupedByExtensionPoints;
- (id)supportedMediaCategories;
- (bool)supportsMultiwindow;

@end
