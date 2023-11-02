
@interface PKAccountInvitationController : NSObject <PKPaymentServiceDelegate, PKSetupFlowControllerProtocol> {
    unsigned long long  _accessLevel;
    PKAccount * _account;
    PKAccountService * _accountService;
    PKApplyController * _applyController;
    long long  _context;
    PKDeviceSharingCapabilitiesManager * _deviceCapabiltiesManager;
    PKFamilyMember * _familyMember;
    PKFamilyMemberCollection * _familyMemberCollection;
    unsigned long long  _feature;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lockObservers;
    NSHashTable * _observers;
    PKPaymentService * _paymentService;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

@property (nonatomic) unsigned long long accessLevel;
@property (nonatomic, readonly) PKAccount *account;
@property (nonatomic, readonly) PKApplyController *applyController;
@property (nonatomic, readonly) long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKDeviceSharingCapabilitiesManager *deviceCapabiltiesManager;
@property (nonatomic, retain) PKFamilyMember *familyMember;
@property (nonatomic, readonly) PKFamilyMemberCollection *familyMemberCollection;
@property (nonatomic, readonly) unsigned long long feature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canInviteAccountUserWithAccount:(id)arg1;
+ (void)presentCreateAccountUserInvitationWithViewController:(id)arg1 account:(id)arg2 accountUserCollection:(id)arg3 familyMemberCollection:(id)arg4 context:(long long)arg5 completion:(id /* block */)arg6;

- (void).cxx_destruct;
- (void)_accessObserversWithHandler:(id /* block */)arg1;
- (void)_fetchFamilyMemberDeviceCapabilties;
- (id)_filteredFamilyMembersFromFamilyMembers:(id)arg1 accountUsers:(id)arg2 invitations:(id)arg3;
- (void)_informObserversOfFamilyMemberChange;
- (unsigned long long)accessLevel;
- (void)accessLevelOptionsWithCompletion:(id /* block */)arg1;
- (id)account;
- (id)applyController;
- (long long)context;
- (id)deviceCapabiltiesManager;
- (void)didAddAccountPendingFamilyMembers:(id)arg1;
- (void)didUpdateFamilyMembers:(id)arg1;
- (long long)familyCircleCount;
- (id)familyMember;
- (id)familyMemberCollection;
- (void)familyMembersForceReload:(bool)arg1 completion:(id /* block */)arg2;
- (unsigned long long)feature;
- (id)initWithAccount:(id)arg1 context:(long long)arg2 familyMemberCollection:(id)arg3;
- (bool)isCurrentFamilyMemberAnOrganizer;
- (void)nextViewControllerWithCompletion:(id /* block */)arg1;
- (void)registerObserver:(id)arg1;
- (void)setAccessLevel:(unsigned long long)arg1;
- (void)setFamilyMember:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
