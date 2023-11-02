
@interface MDMDeviceQueryUtilities : NSObject

+ (id)allowedDeviceQueriesForAccessRights:(unsigned long long)arg1 isDataSeparated:(bool)arg2;
+ (id)allowedDeviceQueriesOnUserChannelForAccessRights:(unsigned long long)arg1;
+ (id)allowedDeviceQueriesWithUserEnrollment;

@end
