
@interface SSShortcutResultBuilder : SSResultBuilder {
    NSString * _actionIdentifier;
    NSArray * _alternateNames;
    NSString * _domainIdentifier;
    unsigned long long  _entityThumbnailDisplayStyle;
    bool  _isBackgroundRunnable;
    NSString * _name;
    NSString * _numberOfActionsString;
    NSString * _punchoutLabel;
    NSString * _settingsPreference;
    NSString * _thumbnailURL;
    NSString * _userActivityRequiredString;
}

@property (nonatomic, retain) NSString *actionIdentifier;
@property (nonatomic, retain) NSArray *alternateNames;
@property (nonatomic, retain) NSString *domainIdentifier;
@property (nonatomic) unsigned long long entityThumbnailDisplayStyle;
@property (nonatomic) bool isBackgroundRunnable;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *numberOfActionsString;
@property (nonatomic, retain) NSString *punchoutLabel;
@property (nonatomic, retain) NSString *settingsPreference;
@property (nonatomic, retain) NSString *thumbnailURL;
@property (nonatomic, retain) NSString *userActivityRequiredString;

+ (id)bundleId;
+ (bool)supportsResult:(id)arg1;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)alternateNames;
- (id)buildAppTopHitEntityCardSection;
- (id)buildButtonItems;
- (bool)buildButtonItemsAreTrailing;
- (id)buildCommand;
- (id)buildDescriptions;
- (id)buildDetailedRowCardSection;
- (id)buildFootnote;
- (id)buildResult;
- (id)buildThumbnail;
- (id)buildTrailingThumbnail;
- (id)domainIdentifier;
- (unsigned long long)entityThumbnailDisplayStyle;
- (id)initWithResult:(id)arg1;
- (bool)isAlarmResult;
- (bool)isBackgroundRunnable;
- (id)name;
- (id)numberOfActionsString;
- (id)punchoutLabel;
- (bool)resultShadowsSettingResult;
- (void)setActionIdentifier:(id)arg1;
- (void)setAlternateNames:(id)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setEntityThumbnailDisplayStyle:(unsigned long long)arg1;
- (void)setIsBackgroundRunnable:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNumberOfActionsString:(id)arg1;
- (void)setPunchoutLabel:(id)arg1;
- (void)setSettingsPreference:(id)arg1;
- (void)setThumbnailURL:(id)arg1;
- (void)setUserActivityRequiredString:(id)arg1;
- (id)settingsPreference;
- (id)thumbnailURL;
- (id)userActivityRequiredString;

@end
