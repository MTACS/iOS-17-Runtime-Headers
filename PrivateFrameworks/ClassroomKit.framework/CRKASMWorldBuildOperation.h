
@interface CRKASMWorldBuildOperation : CATOperation {
    NSArray * _classKitClasses;
    <CRKClassKitCurrentUser> * _classKitCurrentUser;
    NSDictionary * _classKitLocationsByLocationID;
    NSDictionary * _classKitPersonsByClassID;
    CRKASMRosterProviderEnvironment * _environment;
    NSSet * _manageableLocationIDs;
    NSDictionary * _trustedClassKitPersonsByClassID;
}

@property (nonatomic, retain) NSArray *classKitClasses;
@property (nonatomic, retain) <CRKClassKitCurrentUser> *classKitCurrentUser;
@property (nonatomic, copy) NSDictionary *classKitLocationsByLocationID;
@property (nonatomic, copy) NSDictionary *classKitPersonsByClassID;
@property (nonatomic, readonly) CRKASMRosterProviderEnvironment *environment;
@property (nonatomic, copy) NSSet *manageableLocationIDs;
@property (nonatomic, copy) NSDictionary *trustedClassKitPersonsByClassID;

+ (id)makeErrorWithErrorsByObjectID:(id)arg1;

- (void).cxx_destruct;
- (void)buildAllClassKitPersonsByClassID;
- (void)buildClassKitClasses;
- (void)buildClassKitLocationsByLocationID;
- (void)buildCurrentClassKitUser;
- (void)buildManageableLocationIDs;
- (void)checkAccountEligibility;
- (id)classKitClasses;
- (id)classKitCurrentUser;
- (id)classKitLocationsByLocationID;
- (id)classKitPersonsByClassID;
- (id)compileResult;
- (id)environment;
- (void)finish;
- (void)finishWithEmptyResultObject;
- (void)housekeepKeychain;
- (void)housekeepKeychainWithRoster:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (bool)isAsynchronous;
- (void)main;
- (id)makeHousekeeperWithRoster:(id)arg1;
- (id)manageableLocationIDs;
- (id)rosterRequirements;
- (void)setClassKitClasses:(id)arg1;
- (void)setClassKitCurrentUser:(id)arg1;
- (void)setClassKitLocationsByLocationID:(id)arg1;
- (void)setClassKitPersonsByClassID:(id)arg1;
- (void)setManageableLocationIDs:(id)arg1;
- (void)setTrustedClassKitPersonsByClassID:(id)arg1;
- (id)trustedClassKitPersonsByClassID;

@end
