
@interface AMSAnisette : NSObject <AMSBagConsumer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)_accountIDForType:(long long)arg1 account:(id)arg2;
+ (void)_bagDomainExistsForURL:(id)arg1 type:(long long)arg2 bag:(id)arg3 completion:(id /* block */)arg4;
+ (id)_eraseProvisioningForType:(long long)arg1 account:(id)arg2;
+ (id)_handleActionName:(id)arg1 actionData:(id)arg2 account:(id)arg3 type:(long long)arg4 bag:(id)arg5;
+ (id)_headersForRequest:(id)arg1 account:(id)arg2 type:(long long)arg3;
+ (id)_provisionMachineWithActionData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4;
+ (bool)_shouldRetryAfterError:(id)arg1;
+ (id)_syncMachineWithActionData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (bool)handleResponse:(id)arg1 account:(id)arg2 type:(long long)arg3 bag:(id)arg4;
+ (id)handleResponse:(id)arg1 type:(long long)arg2 bag:(id)arg3 account:(id)arg4;
+ (id)headersForRequest:(id)arg1 account:(id)arg2 type:(long long)arg3 bag:(id)arg4;

@end
