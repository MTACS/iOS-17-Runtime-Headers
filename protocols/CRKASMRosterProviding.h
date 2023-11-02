
@protocol CRKASMRosterProviding <NSObject>

@required

- (void)createCourseWithProperties:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CRKASMCourseCreateProperties *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)ingestCertificates:(NSSet *)arg1 forTrustedUserIdentifier:(NSString *)arg2 error:(id*)arg3;
- (<CRKASMUserDirectory> *)instructorDirectoryForLocationIDs:(NSArray *)arg1;
- (bool)isPopulated;
- (NSArray *)locationsWithManagePermissions;
- (void)refresh;
- (void)removeCourseWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DMFControlGroupIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<CRKASMRoster> *)roster;
- (<CRKASMUserDirectory> *)studentDirectoryForLocationIDs:(NSArray *)arg1;
- (void)updateCourseWithIdentifier:(void *)arg1 properties:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: DMFControlGroupIdentifier *, CRKASMCourseUpdateProperties *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<CRKASMUserFetching> *)userFetcher;

@end
