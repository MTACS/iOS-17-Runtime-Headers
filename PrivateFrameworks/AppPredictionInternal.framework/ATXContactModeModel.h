
@interface ATXContactModeModel : NSObject {
    NSSet * _cnContactIdsOfEmergencyContacts;
    NSSet * _cnContactIdsOfFavoriteContacts;
    NSSet * _cnContactIdsOfICloudFamilyMembers;
    MLModel * _contactModeModel;
    ATXContactNotificationEngagementEventProvider * _contactNotificationEngagementEventProvider;
    unsigned long long  _mode;
    ATXModeAffinityModelsConstants * _modeAffinityModelsConstants;
    <ATXModeEntityEventProviderProtocol> * _modeEventProvider;
    NSSet * _vipContactEmailAddresses;
}

- (void).cxx_destruct;
- (void)addNotificationsSignalsForIdentifier:(id)arg1 toContactSpecificFeatures:(id)arg2;
- (id)contactKeysToFetch;
- (id)featuresToModel:(id)arg1;
- (id)init;
- (id)initWithMode:(unsigned long long)arg1;
- (id)loadContactModeModel;
- (id)meContact;
- (id)modelName;
- (id)purgeDeletedContacts:(id)arg1;
- (double)scoreFromContactFeatures:(id)arg1;
- (id)scoredEntities;

@end
