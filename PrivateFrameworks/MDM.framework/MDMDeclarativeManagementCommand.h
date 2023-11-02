
@interface MDMDeclarativeManagementCommand : NSObject

+ (void)_enrollmentTypeWithProfileIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)declarativeManagementFatalError;
+ (bool)processMultiUserDeviceUserChannelRequestTypeWithProfileIdentifier:(id)arg1 request:(id)arg2 error:(id*)arg3;
+ (bool)processRequestTypeWithProfileIdentifier:(id)arg1 request:(id)arg2 error:(id*)arg3;
+ (bool)unenrollWithProfileIdentifier:(id)arg1 error:(id*)arg2;

@end
