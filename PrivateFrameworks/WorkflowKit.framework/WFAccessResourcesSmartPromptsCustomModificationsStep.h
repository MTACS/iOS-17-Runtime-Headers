
@interface WFAccessResourcesSmartPromptsCustomModificationsStep : NSObject <WFProgressiveMigrationCustomModificationsStep> {
    NSDictionary * _accessResourceIdentifiersByContentDestination;
    NSDictionary * _actionIdentifiersByContentDestination;
    NSDictionary * _contentDestinationsByAccessResourceIdentifier;
    NSDictionary * _contentDestinationsByActionIdentifier;
}

@property (nonatomic, readonly) NSDictionary *accessResourceIdentifiersByContentDestination;
@property (nonatomic, readonly) NSDictionary *actionIdentifiersByContentDestination;
@property (nonatomic, readonly) NSDictionary *contentDestinationsByAccessResourceIdentifier;
@property (nonatomic, readonly) NSDictionary *contentDestinationsByActionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessResourceIdentifiersByContentDestination;
- (id)actionIdentifiersByContentDestination;
- (id)actionIdentifiersThatRequireMigrationForAccessResourceIdentifiers:(id)arg1;
- (id)bundleIdentifierForIntentBasedActionIdentifier:(id)arg1 accessResourceIdentifiers:(id)arg2;
- (id)contentDestinationsByAccessResourceIdentifier;
- (id)contentDestinationsByActionIdentifier;
- (id)contentLocationForActionIdentifier:(id)arg1 statesByAccessResourceIdentifier:(id)arg2;
- (id)extractBundleIdentifierFromIntentsAccessResourceIdentifier:(id)arg1;
- (id)fetchMigrationEligibleActionUUIDsForWorkflow:(id)arg1 context:(id)arg2 workflowAccessResourceIdentifiers:(id)arg3;
- (id)fetchStatesByAccessResourceIdentifierForWorkflow:(id)arg1 context:(id)arg2;
- (void)migrateAccessResourcesToSmartPromptsForWorkflow:(id)arg1 context:(id)arg2;
- (bool)performModificationsWithContext:(id)arg1 error:(id*)arg2;
- (bool)shortcutHasSmartPromptsData:(id)arg1 context:(id)arg2;

@end
