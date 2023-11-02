
@interface ATXUserEducationSuggestionServer : NSObject {
    ATXUserEducationSuggestionConnector * _connector;
    ATXUserEducationSuggestionCustomizeFocusServer * _customizeFocusServer;
    ATXUserEducationSuggestionExploreFacesServer * _exploreFacesServer;
    ATXUserEducationSuggestionSleepMigrationServer * _sleepMigrationServer;
}

@property (nonatomic, readonly) ATXUserEducationSuggestionCustomizeFocusServer *customizeFocusServer;
@property (nonatomic, readonly) ATXUserEducationSuggestionExploreFacesServer *exploreFacesServer;
@property (nonatomic, readonly) ATXUserEducationSuggestionSleepMigrationServer *sleepMigrationServer;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)customizeFocusServer;
- (id)exploreFacesServer;
- (id)init;
- (id)sleepMigrationServer;

@end
