
@interface CRKASMRosterProviderFactory : NSObject

- (id)makeInstructorRosterProvider;
- (id)makeInstructorRosterProviderWithoutKeychain;
- (id)makeInstructorRosterWithoutKeychainAndWithPersonaAdoption;
- (id)makeRosterProviderWithConfiguration:(id)arg1;
- (id)makeStudentRosterProvider;

@end
