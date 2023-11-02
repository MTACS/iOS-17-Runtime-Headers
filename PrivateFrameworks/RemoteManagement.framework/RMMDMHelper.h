
@interface RMMDMHelper : NSObject

+ (id)_enrollDDMChannelIfNeededWithController:(id)arg1 profileIdentifier:(id)arg2 enrollmentType:(long long)arg3 scope:(long long)arg4 username:(id)arg5 personaID:(id)arg6 error:(id*)arg7;
+ (id)_enrolledDDMChannelWithController:(id)arg1 profileIdentifier:(id)arg2 enrollmentType:(long long)arg3 scope:(long long)arg4 username:(id)arg5 personaID:(id)arg6 error:(id*)arg7;
+ (id)_managementChannelForEnrollmentURL:(id)arg1 controller:(id)arg2 error:(id*)arg3;
+ (void)_setActive:(bool)arg1 scope:(long long)arg2;
+ (bool)_unenrollDDMChannelWithController:(id)arg1 enrollmentURL:(id)arg2 enrollmentType:(long long)arg3 error:(id*)arg4;
+ (bool)isActiveForScope:(long long)arg1;
+ (bool)processDeclarativeManagementCommandWithProfileIdentifier:(id)arg1 channelType:(long long)arg2 username:(id)arg3 personaID:(id)arg4 request:(id)arg5 error:(id*)arg6;
+ (bool)processDeclarativeManagementCommandWithProfileIdentifier:(id)arg1 enrollmentType:(long long)arg2 scope:(long long)arg3 username:(id)arg4 personaID:(id)arg5 request:(id)arg6 error:(id*)arg7;
+ (bool)unenrollWithProfileIdentifier:(id)arg1 channelType:(long long)arg2 error:(id*)arg3;
+ (bool)unenrollWithProfileIdentifier:(id)arg1 enrollmentType:(long long)arg2 scope:(long long)arg3 error:(id*)arg4;

@end
