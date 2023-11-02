
@interface WFEvernoteAccessResource : WFAccessResource

+ (id)evernoteCallbackScheme;
+ (id)evernoteSession;
+ (id)userInterfaceClasses;
+ (id)userInterfaceProtocol;

- (id)associatedAppIdentifier;
- (bool)canLogOut;
- (void)dealloc;
- (id)initWithDefinition:(id)arg1;
- (void)logOut;
- (void)makeAvailableWithRemoteInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)protectedResourceDescription;
- (id)resourceName;
- (unsigned long long)status;
- (id)username;

@end
