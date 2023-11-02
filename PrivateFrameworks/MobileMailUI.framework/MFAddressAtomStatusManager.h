
@interface MFAddressAtomStatusManager : NSObject <MFAddressBookClient> {
    EMAccount * _account;
    <MFAddressAtomProvider> * _atomProvider;
    MFMessageLoadingContext * _context;
    MailAccount * _legacyAccount;
    EMSecurityInformation * _securityInformation;
    NSError * _smimeError;
}

@property (nonatomic, retain) EMAccount *account;
@property (nonatomic) <MFAddressAtomProvider> *atomProvider;
@property (nonatomic) MFMessageLoadingContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MailAccount *legacyAccount;
@property (nonatomic, retain) EMSecurityInformation *securityInformation;
@property (setter=setSMIMEError:, nonatomic, retain) NSError *smimeError;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_atomContainsVIPSender:(id)arg1;
- (void)_commonInit;
- (void)_invalidateAtoms;
- (void)_legacyAccountsDidChange:(id)arg1;
- (void)_trustDidChange:(id)arg1;
- (void)_updateAtomsInList:(id)arg1;
- (void)_updateOtherSignersList:(id)arg1;
- (void)_updateVIPStatus;
- (void)_vipSendersDidChange:(id)arg1;
- (id)account;
- (int)actionForTrustInformation:(id)arg1;
- (void)addressBookManager:(id)arg1 addressBookDidChange:(void*)arg2;
- (void)addressBookPreferencesChangedForAddressBookManager:(id)arg1;
- (id)atomProvider;
- (id)context;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (id)legacyAccount;
- (id)otherSigners;
- (id)securityInformation;
- (void)setAccount:(id)arg1;
- (void)setAtomProvider:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setLegacyAccount:(id)arg1;
- (void)setSMIMEError:(id)arg1;
- (void)setSecurityInformation:(id)arg1;
- (id)smimeError;
- (void)updateTrustForDisplayedAtoms;
- (void)updateWithSecurityInformation:(id)arg1;

@end
