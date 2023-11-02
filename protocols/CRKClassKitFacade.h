
@protocol CRKClassKitFacade <NSObject>

@required

- (long long)accountState;
- (void)addInstructor:(id <CRKClassKitPerson>)arg1 toClass:(id <CRKClassKitClass>)arg2;
- (void)addStudent:(id <CRKClassKitPerson>)arg1 toClass:(id <CRKClassKitClass>)arg2;
- (<CRKClassKitDataObserver> *)classDataObserverWithSortDescriptors:(NSArray *)arg1;
- (void)currentUserWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CRKClassKitCurrentUser> *, NSError *, void*
- (void)deregisterDataObserver:(id <CRKClassKitDataObserver>)arg1;
- (void)enrolledClassesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)executeQuery:(id <CRKClassKitQuery>)arg1;
- (void)instructedClassesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)instructorsInClassWithObjectID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (<CRKClassKitDataObserver> *)locationsObserverWithSortDescriptors:(NSArray *)arg1;
- (void)locationsWithManagePermissionsForUserWithObjectID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)locationsWithObjectIDs:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (<CRKClassKitClass> *)makeClassWithLocationID:(NSString *)arg1 name:(NSString *)arg2;
- (<CRKClassKitQuery> *)makeInstructorQueryForSearchString:(NSString *)arg1 locationIDs:(NSArray *)arg2 sortingGivenNameFirst:(bool)arg3 pageSize:(long long)arg4;
- (<CRKClassKitQuery> *)makeQueryForPersonsWithIdentifiers:(NSArray *)arg1;
- (<CRKClassKitQuery> *)makeStudentQueryForSearchString:(NSString *)arg1 locationIDs:(NSArray *)arg2 sortingGivenNameFirst:(bool)arg3 pageSize:(long long)arg4;
- (NSSet *)objectIDsOfInstructorsInClass:(id <CRKClassKitClass>)arg1;
- (NSSet *)objectIDsOfStudentsInClass:(id <CRKClassKitClass>)arg1;
- (bool)ownsError:(NSError *)arg1;
- (<CRKClassKitDataObserver> *)personObserverWithPersonIDs:(NSSet *)arg1 sortDescriptors:(NSArray *)arg2;
- (void)registerDataObserver:(id <CRKClassKitDataObserver>)arg1;
- (void)removeClass:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <CRKClassKitClass> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeInstructor:(id <CRKClassKitPerson>)arg1 fromClass:(id <CRKClassKitClass>)arg2;
- (void)removeStudent:(id <CRKClassKitPerson>)arg1 fromClass:(id <CRKClassKitClass>)arg2;
- (void)saveClass:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <CRKClassKitClass> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)studentsInClassWithObjectID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (<CRKCancelable> *)subscribeToClassMembershipChangeEvents:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<CRKCancelable> *)subscribeToCurrentUserDidChangeEvents:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
