
@interface PSPhotoServicesAuthorizationLevelController : PSListItemsController {
    NSString * _clientIdentifier;
    NSDictionary * _details;
    NSString * _displayName;
    NSBundle * _entityBundle;
    PSSpecifier * _limitedLibraryRowSpecifier;
    NSArray * _limitedLibrarySectionSpecifiers;
    NSArray * _pickerUsageSectionSpecifiers;
}

@property (nonatomic, retain) NSDictionary *details;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, retain) NSBundle *entityBundle;

- (void).cxx_destruct;
- (void)_addLimitedLibrarySection;
- (void)_addPickerUsageSectionIfNeeded;
- (unsigned long long)_currentTCCAuthorizationRight;
- (void)_handleUpgradePromptNotification:(id)arg1;
- (id)_limitedLibrarySectionSpecifiers;
- (id)_locationSetting:(id)arg1;
- (id)_parentTCCSpecifiers;
- (id)_pickerUsageSectionSpecifiers;
- (void)_presentImagePickerForModifyingSelection;
- (void)_removeLimitedLibrarySectionIfPresent;
- (void)_removePickerUsageSectionIfPresent;
- (id)details;
- (id)displayName;
- (id)entityBundle;
- (id)footerStringForSpecifiers:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEntityBundle:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end
