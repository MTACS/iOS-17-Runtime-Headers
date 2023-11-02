
@interface CRKConcreteClassKitRosterRequirements : NSObject <CRKClassKitRosterRequirements> {
    NSObject<CRKClassKitFacade> * _classKitFacade;
    NSArray * _dataObservers;
    bool  _forInstructor;
    NSMutableDictionary * _generalObserversByToken;
    <CRKCancelable> * _membershipDidChangeSubscription;
    NSMutableDictionary * _personObserversByToken;
    <CRKCancelable> * _userDidChangeSubscription;
}

@property (nonatomic, readonly) long long accountState;
@property (nonatomic, readonly) NSObject<CRKClassKitFacade> *classKitFacade;
@property (nonatomic, readonly, copy) NSArray *dataObservers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isForInstructor, nonatomic, readonly) bool forInstructor;
@property (nonatomic, readonly) NSMutableDictionary *generalObserversByToken;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CRKCancelable> *membershipDidChangeSubscription;
@property (nonatomic, readonly) NSMutableDictionary *personObserversByToken;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CRKCancelable> *userDidChangeSubscription;

+ (id)instructorRosterRequirementsWithClassKitFacade:(id)arg1;
+ (id)studentRosterRequirementsWithClassKitFacade:(id)arg1;

- (void).cxx_destruct;
- (long long)accountState;
- (id)addGeneralObserver:(id /* block */)arg1;
- (void)addNullableObserver:(id)arg1 toArray:(id)arg2;
- (id)addObserverForPersonIDs:(id)arg1 observerBlock:(id /* block */)arg2;
- (void)addPerson:(id)arg1 toClass:(id)arg2;
- (void)addTrustedPerson:(id)arg1 toClass:(id)arg2;
- (void)callGeneralObserversWithReason:(id)arg1;
- (id)classKitFacade;
- (void)classesWithCompletion:(id /* block */)arg1;
- (void)currentUserWithCompletion:(id /* block */)arg1;
- (id)dataObservers;
- (void)dealloc;
- (void)deregisterDataObservers;
- (void)executeQuery:(id)arg1;
- (id)generalObserversByToken;
- (id)initWithClassKitFacade:(id)arg1 isForInstructor:(bool)arg2;
- (bool)isForInstructor;
- (bool)isForStudent;
- (void)locationsWithManagePermissionsForUserWithObjectID:(id)arg1 completion:(id /* block */)arg2;
- (void)locationsWithObjectIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)makeClassWithLocationID:(id)arg1 name:(id)arg2;
- (id /* block */)makeDataChangedBlockWithObserverDescription:(id)arg1;
- (id)makeDataObservers;
- (id)makeInstructorQueryForSearchString:(id)arg1 locationIDs:(id)arg2 sortingGivenNameFirst:(bool)arg3 pageSize:(long long)arg4;
- (id)makeQueryForPersonsWithIdentifiers:(id)arg1;
- (id)makeStudentQueryForSearchString:(id)arg1 locationIDs:(id)arg2 sortingGivenNameFirst:(bool)arg3 pageSize:(long long)arg4;
- (id)makeToken;
- (id)membershipDidChangeSubscription;
- (id)objectIDsOfPersonsInClass:(id)arg1;
- (id)objectIDsOfTrustedPersonsInClass:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)ownsError:(id)arg1;
- (id)personObserversByToken;
- (void)personsInClassWithObjectID:(id)arg1 completion:(id /* block */)arg2;
- (void)registerDataObservers;
- (void)registerForCurrentUserChangeNotification;
- (void)registerForMembershipChangeDarwinNotification;
- (void)removeClass:(id)arg1 completion:(id /* block */)arg2;
- (void)removeGeneralObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removePerson:(id)arg1 fromClass:(id)arg2;
- (void)removePersonObserver:(id)arg1;
- (void)removeTrustedPerson:(id)arg1 fromClass:(id)arg2;
- (void)saveClass:(id)arg1 completion:(id /* block */)arg2;
- (void)setMembershipDidChangeSubscription:(id)arg1;
- (void)setUserDidChangeSubscription:(id)arg1;
- (void)startObservingAccountState;
- (void)stopObservingAccountState;
- (void)trustedPersonsInClassWithObjectID:(id)arg1 completion:(id /* block */)arg2;
- (void)unregisterForMembershipChangeDarwinNotification;
- (id)userDidChangeSubscription;

@end
