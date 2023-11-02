
@interface WFAccountAccessResource : WFAccessResource {
    id /* block */  _completionHandler;
    id  _observer;
}

@property (nonatomic, readonly) Class accountClass;
@property (nonatomic, readonly, copy) NSArray *accounts;

+ (id)userInterfaceClasses;
+ (id)userInterfaceProtocol;

- (void).cxx_destruct;
- (Class)accountClass;
- (id)accounts;
- (bool)canLogOut;
- (void)dealloc;
- (id)errorReasonForStatus:(unsigned long long)arg1;
- (id)importErrorReasonForStatus:(unsigned long long)arg1;
- (id)initWithDefinition:(id)arg1;
- (void)logOut;
- (void)makeAvailableWithRemoteInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)name;
- (id)protectedResourceDescription;
- (id)resourceName;
- (id)settingsUIDefinition;
- (unsigned long long)status;
- (bool)supportsMultipleAccounts;
- (id)username;

@end
