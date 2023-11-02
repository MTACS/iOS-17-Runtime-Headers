
@interface HMDRemoteLoginUtilities : NSObject <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)fetchIsTwoFactorAuthenticationEnabledForAccountWithReason:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)isTwoFactorAuthenticationEnabledForAccount;
+ (id)logCategory;
+ (id)primaryITunesAccount;
+ (long long)serviceTypeForAccountService:(unsigned long long)arg1;

@end
