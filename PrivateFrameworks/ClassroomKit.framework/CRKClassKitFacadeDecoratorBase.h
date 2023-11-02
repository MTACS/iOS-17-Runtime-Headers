
@interface CRKClassKitFacadeDecoratorBase : NSObject <CRKClassKitFacade> {
    NSObject<CRKClassKitFacade> * _underlyingClassKitFacade;
}

@property (nonatomic, readonly) long long accountState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<CRKClassKitFacade> *underlyingClassKitFacade;

+ (id)keyPathsForValuesAffectingAccountState;

- (void).cxx_destruct;
- (long long)accountState;
- (void)addInstructor:(id)arg1 toClass:(id)arg2;
- (void)addStudent:(id)arg1 toClass:(id)arg2;
- (id)classDataObserverWithSortDescriptors:(id)arg1;
- (void)currentUserWithCompletion:(id /* block */)arg1;
- (void)deregisterDataObserver:(id)arg1;
- (id)description;
- (void)enrolledClassesWithCompletion:(id /* block */)arg1;
- (void)executeQuery:(id)arg1;
- (id)init;
- (id)initWithClassKitFacade:(id)arg1;
- (void)instructedClassesWithCompletion:(id /* block */)arg1;
- (void)instructorsInClassWithObjectID:(id)arg1 completion:(id /* block */)arg2;
- (id)locationsObserverWithSortDescriptors:(id)arg1;
- (void)locationsWithManagePermissionsForUserWithObjectID:(id)arg1 completion:(id /* block */)arg2;
- (void)locationsWithObjectIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)makeClassWithLocationID:(id)arg1 name:(id)arg2;
- (id)makeInstructorQueryForSearchString:(id)arg1 locationIDs:(id)arg2 sortingGivenNameFirst:(bool)arg3 pageSize:(long long)arg4;
- (id)makeQueryForPersonsWithIdentifiers:(id)arg1;
- (id)makeStudentQueryForSearchString:(id)arg1 locationIDs:(id)arg2 sortingGivenNameFirst:(bool)arg3 pageSize:(long long)arg4;
- (id)objectIDsOfInstructorsInClass:(id)arg1;
- (id)objectIDsOfStudentsInClass:(id)arg1;
- (bool)ownsError:(id)arg1;
- (id)personObserverWithPersonIDs:(id)arg1 sortDescriptors:(id)arg2;
- (void)registerDataObserver:(id)arg1;
- (void)removeClass:(id)arg1 completion:(id /* block */)arg2;
- (void)removeInstructor:(id)arg1 fromClass:(id)arg2;
- (void)removeStudent:(id)arg1 fromClass:(id)arg2;
- (void)saveClass:(id)arg1 completion:(id /* block */)arg2;
- (void)studentsInClassWithObjectID:(id)arg1 completion:(id /* block */)arg2;
- (id)subscribeToClassMembershipChangeEvents:(id /* block */)arg1;
- (id)subscribeToCurrentUserDidChangeEvents:(id /* block */)arg1;
- (id)underlyingClassKitFacade;

@end
