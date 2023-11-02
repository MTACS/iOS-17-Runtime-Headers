
@interface CRKConcreteClassKitFacade : NSObject <CRKClassKitFacade> {
    CRKClassKitAccountStateProvider * _accountStateProvider;
}

@property (nonatomic, readonly) long long accountState;
@property (nonatomic, readonly) CRKClassKitAccountStateProvider *accountStateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffectingAccountState;
+ (id)makePersonSortDescriptorsSortingGivenNameFirst:(bool)arg1;

- (void).cxx_destruct;
- (long long)accountState;
- (id)accountStateProvider;
- (void)addInstructor:(id)arg1 toClass:(id)arg2;
- (void)addPerson:(id)arg1 withRole:(unsigned long long)arg2 toClass:(id)arg3;
- (void)addStudent:(id)arg1 toClass:(id)arg2;
- (id)classDataObserverWithSortDescriptors:(id)arg1;
- (void)currentUserWithCompletion:(id /* block */)arg1;
- (id)dataStore;
- (void)deregisterDataObserver:(id)arg1;
- (void)enrolledClassesWithCompletion:(id /* block */)arg1;
- (void)executeQuery:(id)arg1;
- (id)init;
- (void)instructedClassesWithCompletion:(id /* block */)arg1;
- (void)instructorsInClassWithObjectID:(id)arg1 completion:(id /* block */)arg2;
- (id)locationsObserverWithSortDescriptors:(id)arg1;
- (void)locationsWithManagePermissionsForUserWithObjectID:(id)arg1 completion:(id /* block */)arg2;
- (void)locationsWithObjectIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)makeClassWithLocationID:(id)arg1 name:(id)arg2;
- (id)makeDataObserverWithObjectType:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;
- (id)makeInstructorQueryForSearchString:(id)arg1 locationIDs:(id)arg2 sortingGivenNameFirst:(bool)arg3 pageSize:(long long)arg4;
- (id)makePredicateForObjectIDs:(id)arg1;
- (id)makePredicatesForObjectIDs:(id)arg1;
- (id)makeQueryForPersonsWithIdentifiers:(id)arg1;
- (id)makeQueryForPersonsWithRole:(long long)arg1 locationIDs:(id)arg2 searchString:(id)arg3 sortingGivenNameFirst:(bool)arg4 pageSize:(long long)arg5;
- (id)makeStudentQueryForSearchString:(id)arg1 locationIDs:(id)arg2 sortingGivenNameFirst:(bool)arg3 pageSize:(long long)arg4;
- (id)objectIDsOfInstructorsInClass:(id)arg1;
- (id)objectIDsOfMembersInClass:(id)arg1 withRole:(unsigned long long)arg2;
- (id)objectIDsOfStudentsInClass:(id)arg1;
- (bool)ownsError:(id)arg1;
- (id)personObserverWithPersonIDs:(id)arg1 sortDescriptors:(id)arg2;
- (void)registerDataObserver:(id)arg1;
- (void)removeClass:(id)arg1 completion:(id /* block */)arg2;
- (void)removeInstructor:(id)arg1 fromClass:(id)arg2;
- (void)removePerson:(id)arg1 withRole:(unsigned long long)arg2 fromClass:(id)arg3;
- (void)removeStudent:(id)arg1 fromClass:(id)arg2;
- (void)saveClass:(id)arg1 completion:(id /* block */)arg2;
- (void)studentsInClassWithObjectID:(id)arg1 completion:(id /* block */)arg2;
- (id)subscribeToClassMembershipChangeEvents:(id /* block */)arg1;
- (id)subscribeToCurrentUserDidChangeEvents:(id /* block */)arg1;

@end
