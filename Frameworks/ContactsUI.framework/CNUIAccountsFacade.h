
@interface CNUIAccountsFacade : NSObject {
    ACAccountStore * _accountStore;
    CNUIAccountsFacadeRequestRunner * _requestRunner;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, readonly) CNUIAccountsFacadeRequestRunner *requestRunner;

- (void).cxx_destruct;
- (id)accountStore;
- (void)fetchiCloudFamilyMembersWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithAccountStore:(id)arg1 requestRunner:(id)arg2;
- (id)requestRunner;

@end
