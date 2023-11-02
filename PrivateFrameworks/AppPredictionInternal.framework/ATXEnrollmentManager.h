
@interface ATXEnrollmentManager : NSObject

+ (id)getUserIdForScheme:(id)arg1 enrollmentPeriod:(double)arg2 enrollmentRate:(double)arg3;
+ (id)getUserIdForScheme:(id)arg1 enrollmentPeriod:(double)arg2 enrollmentRate:(double)arg3 currentDate:(id)arg4 defaultsDomain:(id)arg5;
+ (id)readCurrentEnrollmentUserIdFromDefaults:(id)arg1 scheme:(id)arg2;
+ (id)readLastEnrollmentDateFromDefaults:(id)arg1 scheme:(id)arg2;
+ (void)setCurrentEnrollmentUserId:(id)arg1 forUserDefaults:(id)arg2 scheme:(id)arg3;
+ (void)setLastEnrollmentToDate:(id)arg1 forUserDefaults:(id)arg2 scheme:(id)arg3;

@end
