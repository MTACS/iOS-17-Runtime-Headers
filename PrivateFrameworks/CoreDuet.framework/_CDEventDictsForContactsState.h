
@interface _CDEventDictsForContactsState : NSObject {
    NSDictionary * _airDropDict;
    NSDictionary * _airDropDictAtHome;
    NSNumber * _avgOfAllCalls;
    NSArray * _contactParents;
    NSArray * _emergencyContacts;
    NSArray * _emergencyFamilyContacts;
    NSDictionary * _fmfContactsFollowingMyLocation;
    NSDictionary * _fmfContactsSharingLocationsWithMe;
    NSArray * _homeContacts;
    CNContact * _me;
    CHManager * _mngr;
    NSSet * _photosContactIds;
    NSArray * _relationshipContacts;
}

- (void).cxx_destruct;
- (id)init;

@end
