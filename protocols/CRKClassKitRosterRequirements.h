
@protocol CRKClassKitRosterRequirements <NSObject>

@required

- (long long)accountState;
- (id)addGeneralObserver:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (id)addObserverForPersonIDs:(void *)arg1 observerBlock:(void *)arg2; // needs 2 arg types, found 6: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)addPerson:(id <CRKClassKitPerson>)arg1 toClass:(id <CRKClassKitClass>)arg2;
- (void)addTrustedPerson:(id <CRKClassKitPerson>)arg1 toClass:(id <CRKClassKitClass>)arg2;
- (void)classesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)currentUserWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CRKClassKitCurrentUser> *, NSError *, void*
- (void)executeQuery:(id <CRKClassKitQuery>)arg1;
- (void)locationsWithManagePermissionsForUserWithObjectID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)locationsWithObjectIDs:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (<CRKClassKitClass> *)makeClassWithLocationID:(NSString *)arg1 name:(NSString *)arg2;
- (<CRKClassKitQuery> *)makeInstructorQueryForSearchString:(NSString *)arg1 locationIDs:(NSArray *)arg2 sortingGivenNameFirst:(bool)arg3 pageSize:(long long)arg4;
- (<CRKClassKitQuery> *)makeQueryForPersonsWithIdentifiers:(NSArray *)arg1;
- (<CRKClassKitQuery> *)makeStudentQueryForSearchString:(NSString *)arg1 locationIDs:(NSArray *)arg2 sortingGivenNameFirst:(bool)arg3 pageSize:(long long)arg4;
- (NSSet *)objectIDsOfPersonsInClass:(id <CRKClassKitClass>)arg1;
- (NSSet *)objectIDsOfTrustedPersonsInClass:(id <CRKClassKitClass>)arg1;
- (bool)ownsError:(NSError *)arg1;
- (void)personsInClassWithObjectID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)removeClass:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <CRKClassKitClass> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeObserver:(id)arg1;
- (void)removePerson:(id <CRKClassKitPerson>)arg1 fromClass:(id <CRKClassKitClass>)arg2;
- (void)removeTrustedPerson:(id <CRKClassKitPerson>)arg1 fromClass:(id <CRKClassKitClass>)arg2;
- (void)saveClass:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <CRKClassKitClass> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)trustedPersonsInClassWithObjectID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
