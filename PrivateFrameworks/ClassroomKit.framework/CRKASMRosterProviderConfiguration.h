
@interface CRKASMRosterProviderConfiguration : NSObject {
    CRKASMCredentialStore * _credentialStore;
    long long  _maxCourseTrustedUsersCount;
    long long  _maxCourseUsersCount;
    <CRKOSTransactionPrimitives> * _osTransactionPrimitives;
    double  _rosterMutationTimeout;
    NSObject<CRKClassKitRosterRequirements> * _rosterRequirements;
    double  _transactionReleaseDelay;
    NSMapTable * _trustedUserCache;
    NSString * _trustedUserCommonNamePrefix;
    NSMapTable * _userCache;
    NSString * _userCommonNamePrefix;
}

@property (nonatomic, readonly) CRKASMCredentialStore *credentialStore;
@property (nonatomic, readonly) long long maxCourseTrustedUsersCount;
@property (nonatomic, readonly) long long maxCourseUsersCount;
@property (nonatomic, readonly) <CRKOSTransactionPrimitives> *osTransactionPrimitives;
@property (nonatomic, readonly) double rosterMutationTimeout;
@property (nonatomic, readonly) NSObject<CRKClassKitRosterRequirements> *rosterRequirements;
@property (nonatomic, readonly) double transactionReleaseDelay;
@property (nonatomic, readonly) NSMapTable *trustedUserCache;
@property (nonatomic, readonly, copy) NSString *trustedUserCommonNamePrefix;
@property (nonatomic, readonly) NSMapTable *userCache;
@property (nonatomic, readonly, copy) NSString *userCommonNamePrefix;

+ (bool)currentPlatformRequiresPersonaAdoption;
+ (bool)dataSeparationEnabled;
+ (id)instructorRosterConfiguration;
+ (id)instructorRosterConfigurationWithCredentialStore:(id)arg1 personaAdoption:(bool)arg2;
+ (id)instructorRosterWithoutKeychainAndWithPersonaAdoptionConfiguration;
+ (id)instructorRosterWithoutKeychainConfiguration;
+ (id)makeBaseClassKitFacadeWithPersonaAdoption:(bool)arg1;
+ (id)makeInstructorClassKitFacadeWithPersonaAdoption:(bool)arg1;
+ (id)makeStudentClassKitFacade;
+ (id)studentRosterConfiguration;
+ (bool)userCachingEnabled;

- (void).cxx_destruct;
- (id)credentialStore;
- (id)initWithUserCommonNamePrefix:(id)arg1 trustedUserCommonNamePrefix:(id)arg2 rosterRequirements:(id)arg3 credentialStore:(id)arg4 maxCourseUsersCount:(long long)arg5 maxCourseTrustedUsersCount:(long long)arg6 rosterMutationTimeout:(double)arg7 userCachingEnabled:(bool)arg8;
- (id)initWithUserCommonNamePrefix:(id)arg1 trustedUserCommonNamePrefix:(id)arg2 rosterRequirements:(id)arg3 credentialStore:(id)arg4 maxCourseUsersCount:(long long)arg5 maxCourseTrustedUsersCount:(long long)arg6 rosterMutationTimeout:(double)arg7 userCachingEnabled:(bool)arg8 osTransactionPrimitives:(id)arg9 transactionReleaseDelay:(double)arg10;
- (long long)maxCourseTrustedUsersCount;
- (long long)maxCourseUsersCount;
- (id)osTransactionPrimitives;
- (double)rosterMutationTimeout;
- (id)rosterRequirements;
- (double)transactionReleaseDelay;
- (id)trustedUserCache;
- (id)trustedUserCommonNamePrefix;
- (id)userCache;
- (id)userCommonNamePrefix;

@end
