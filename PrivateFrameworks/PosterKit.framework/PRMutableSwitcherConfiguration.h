
@interface PRMutableSwitcherConfiguration : PRSwitcherConfiguration {
    PRPosterConfiguration * _desiredActiveConfiguration;
    NSMapTable * _incomingPosterConfigurationsToBeAssocatedWithExistingPosterConfigurationsUUIDs;
    NSMapTable * _overriddenFocusConfigurationForPosterConfiguration;
    NSMapTable * _overriddenHomescreenConfigurationForPosterConfiguration;
    NSMutableOrderedSet * _pathsToIngest;
}

@property (nonatomic) bool activeConfigurationDueToIncomingFocusModeChange;
@property (nonatomic, copy) NSArray *configurations;
@property (nonatomic, retain) PRPosterConfiguration *desiredActiveConfiguration;
@property (nonatomic, retain) PRPosterConfiguration *selectedConfiguration;

- (void).cxx_destruct;
- (id)desiredActiveConfiguration;
- (id)focusConfigurationForPoster:(id)arg1;
- (id)homeConfigurationForPoster:(id)arg1;
- (id)incomingPosterConfigurations;
- (id)incomingPosterConfigurationsToBeAssocatedWithExistingPosterConfigurationsUUIDs;
- (void)ingestNewPosterConfiguration:(id)arg1;
- (void)ingestNewPosterConfiguration:(id)arg1 toBeAssociatedWithHomeScreenConfiguration:(id)arg2;
- (void)ingestNewPosterConfiguration:(id)arg1 toBeAssociatedWithUUID:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)posterConfigurationsNeedingFocusConfigurationDeleted;
- (id)posterConfigurationsNeedingFocusConfigurationUpdates;
- (id)posterConfigurationsNeedingHomeScreenConfigurationUpdates;
- (void)removeConfiguration:(id)arg1;
- (void)setDesiredActiveConfiguration:(id)arg1;
- (void)setFocusConfiguration:(id)arg1 forPosterConfiguration:(id)arg2;
- (void)setHomeConfiguration:(id)arg1 forPosterConfiguration:(id)arg2;

@end
