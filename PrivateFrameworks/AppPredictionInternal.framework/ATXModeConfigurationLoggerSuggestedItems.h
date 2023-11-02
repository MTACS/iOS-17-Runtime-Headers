
@interface ATXModeConfigurationLoggerSuggestedItems : NSObject {
    NSMutableSet * _suggestedAllowedApps;
    NSMutableSet * _suggestedAllowedContacts;
    NSMutableSet * _suggestedDeniedApps;
    NSMutableSet * _suggestedDeniedContacts;
}

@property (nonatomic, retain) NSMutableSet *suggestedAllowedApps;
@property (nonatomic, retain) NSMutableSet *suggestedAllowedContacts;
@property (nonatomic, retain) NSMutableSet *suggestedDeniedApps;
@property (nonatomic, retain) NSMutableSet *suggestedDeniedContacts;

- (void).cxx_destruct;
- (id)init;
- (void)setSuggestedAllowedApps:(id)arg1;
- (void)setSuggestedAllowedContacts:(id)arg1;
- (void)setSuggestedDeniedApps:(id)arg1;
- (void)setSuggestedDeniedContacts:(id)arg1;
- (id)suggestedAllowedApps;
- (id)suggestedAllowedContacts;
- (id)suggestedDeniedApps;
- (id)suggestedDeniedContacts;

@end
