
@interface PRSwitcherConfiguration : NSObject <NSMutableCopying> {
    PRPosterConfiguration * _activeConfiguration;
    bool  _activeConfigurationDueToIncomingFocusModeChange;
    NSMapTable * _associatedHomeScreenConfigurationsForServerIdentity;
    PRPosterCollection * _collection;
    NSArray * _configurations;
    PRPosterConfiguration * _selectedConfiguration;
}

@property (nonatomic, retain) PRPosterConfiguration *activeConfiguration;
@property (nonatomic) bool activeConfigurationDueToIncomingFocusModeChange;
@property (nonatomic, readonly) NSMapTable *associatedHomeScreenConfigurationsForServerIdentity;
@property (nonatomic, retain) PRPosterCollection *collection;
@property (nonatomic, copy) NSArray *configurations;
@property (nonatomic, readonly) NSSet *heldAssociatedConfigurations;
@property (nonatomic, retain) PRPosterConfiguration *selectedConfiguration;

- (void).cxx_destruct;
- (id)_childPosterConfigurationForConfiguration:(id)arg1;
- (id)_childPosterConfigurationForConfigurationUUID:(id)arg1;
- (id)_initWithCollection:(id)arg1 activeConfiguration:(id)arg2;
- (id)_initWithConfigurations:(id)arg1 selectedConfiguration:(id)arg2 activeConfiguration:(id)arg3 associatedHomeScreenConfigurations:(id)arg4;
- (id)_posterConfigurationForUUID:(id)arg1;
- (id)activeConfiguration;
- (bool)activeConfigurationDueToIncomingFocusModeChange;
- (id)associatedHomeScreenConfigurationsForServerIdentity;
- (id)collection;
- (id)configurations;
- (id)configuredPropertiesForPoster:(id)arg1;
- (id)focusConfigurationForPoster:(id)arg1;
- (id)heldAssociatedConfigurations;
- (id)homeConfigurationForPoster:(id)arg1;
- (id)homeScreenPosterConfigurationForPosterConfiguration:(id)arg1;
- (id)lastModifiedDateForPoster:(id)arg1;
- (id)metadataForPoster:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)primaryPosterIdentityForHomeScreenPosterConfiguration:(id)arg1;
- (id)selectedConfiguration;
- (void)setActiveConfiguration:(id)arg1;
- (void)setActiveConfigurationDueToIncomingFocusModeChange:(bool)arg1;
- (void)setCollection:(id)arg1;
- (void)setConfigurations:(id)arg1;
- (void)setSelectedConfiguration:(id)arg1;
- (id)suggestionMetadataForPoster:(id)arg1;

@end
