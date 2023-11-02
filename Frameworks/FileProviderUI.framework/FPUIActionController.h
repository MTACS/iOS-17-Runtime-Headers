
@interface FPUIActionController : NSObject <FPUIActionControllerProtocol, FPUIActionRemoteContextDelegate> {
    NSString * _actionIdentifier;
    <FPUIActionControllerDelegate> * _delegate;
    NSString * _domainIdentifier;
    NSArray * _items;
    NSString * _providerIdentifier;
}

@property (nonatomic, readonly) NSString *actionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FPUIActionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domainIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSString *providerIdentifier;
@property (readonly) Class superclass;

+ (id)actionControllerForActionIdentifier:(id)arg1 actionTitle:(id)arg2 items:(id)arg3 providerIdentifier:(id)arg4 domainIdentifier:(id)arg5;

- (void).cxx_destruct;
- (void)_delegateDidFinishWithUserInfo:(id)arg1 error:(id)arg2;
- (void)_delegateError:(id)arg1;
- (id)_getExtensionWithError:(id*)arg1;
- (id)actionIdentifier;
- (id)delegate;
- (id)domainIdentifier;
- (id)items;
- (id)performActionWithCompletionHandler:(id /* block */)arg1;
- (id)providerIdentifier;
- (void)remoteActionContext:(id)arg1 didEncounterError:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)remoteActionContextDidFinishAction:(id)arg1 userInfo:(id)arg2 error:(id)arg3;
- (void)setDelegate:(id)arg1;

@end
