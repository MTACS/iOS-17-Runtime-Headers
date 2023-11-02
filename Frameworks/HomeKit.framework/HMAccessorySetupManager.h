
@interface HMAccessorySetupManager : NSObject <HMFLogging> {
    _HMContext * _context;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)UUID;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)failAccessorySetupWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)finishAccessorySetupWithCompletionHandler:(id /* block */)arg1;
- (void)finishAccessorySetupWithSetupCompletedInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)performAccessorySetupUsingRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resumeAccessorySetupWithUserInfo:(id)arg1 completionHandler:(id /* block */)arg2;

@end
