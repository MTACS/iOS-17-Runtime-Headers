
@interface AAInheritanceContactsViewModel : NSObject {
    AAContactsManager * _contactsManager;
    AAInheritanceController * _inheritanceController;
}

- (void).cxx_destruct;
- (void)_fetchInvitationStatuses:(id /* block */)arg1;
- (void)_fetchInvitations:(id /* block */)arg1;
- (id)_localBenefactors:(id)arg1;
- (id)_localBeneficiaries:(id)arg1 invitationStatuses:(id)arg2;
- (id)_localContact:(id)arg1;
- (void)fetchBenefactors:(id /* block */)arg1;
- (void)fetchBeneficiaries:(id /* block */)arg1;
- (void)fetchSuggestedBeneficiaries:(id /* block */)arg1;
- (id)init;

@end
