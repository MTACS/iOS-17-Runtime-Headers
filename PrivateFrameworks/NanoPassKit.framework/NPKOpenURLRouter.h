
@interface NPKOpenURLRouter : NSObject {
    <NPKOpenURLRouterDelegate> * _delegate;
}

@property (nonatomic) <NPKOpenURLRouterDelegate> *delegate;

- (void).cxx_destruct;
- (bool)_handleServiceModeRequestedForPassWithUniqueID:(id)arg1;
- (bool)_handleShareForMailboxAddress:(id)arg1 referralSource:(id)arg2;
- (bool)_handleShareableCredentialsAcceptanceWithShareableCredentials:(id)arg1 thumbnailImageData:(id)arg2;
- (bool)_handleSubcredentialInvitationAcceptanceForLocalInvitationIdentifier:(id)arg1 remoteInvitationIdentifier:(id)arg2 contactName:(id)arg3 thumbnailImageData:(id)arg4;
- (bool)_handleUniversalLinkURLAsShoeboxURLForPathComponents:(id)arg1 shouldParsePathComponents:(bool)arg2 urlComponents:(id)arg3;
- (bool)_isValidRelayServerURL:(id)arg1 outPathComponents:(id*)arg2;
- (bool)_presentEntitlementDetailsForPassUniqueID:(id)arg1;
- (bool)_presentListActionsMenu;
- (bool)_presentPassDetailsForPassWithUniqueID:(id)arg1;
- (bool)_presentPassList;
- (bool)_presentPassListPreventAppUninstall;
- (bool)_presentProvisioningFlow;
- (bool)_presentShareDetailsForPassUniqueID:(id)arg1 shareIdentifier:(id)arg2;
- (bool)_presentTransactionDetailsForPassWithUniqueID:(id)arg1 transactionIdentifier:(id)arg2;
- (bool)_presentTransactionDetailsForPassWithUniqueID:(id)arg1 transactionServiceIdentifier:(id)arg2 transactionSourceIdentifier:(id)arg3;
- (bool)_processAddCardHostWithPathComponents:(id)arg1;
- (bool)_processCardHostWithPathComponents:(id)arg1 queryItems:(id)arg2;
- (bool)_processListActionsMenuHostWithPathComponents:(id)arg1;
- (bool)_processPassesHostWithPathComponents:(id)arg1 urlComponents:(id)arg2;
- (bool)_processShareHostWithPathComponents:(id)arg1 urlComponents:(id)arg2;
- (bool)_processShareableCredentialsHostWithQueryItems:(id)arg1;
- (bool)_processShoeboxSchemeForHost:(id)arg1 pathComponents:(id)arg2 urlComponents:(id)arg3;
- (bool)_processShoeboxSchemeForURL:(id)arg1;
- (bool)_processSubcredentialInvitationHostWithQueryItems:(id)arg1;
- (bool)_processTransactionHostWithQueryItems:(id)arg1;
- (id)delegate;
- (bool)handleOpenURL:(id)arg1;
- (bool)handleUniversalLinkWithURL:(id)arg1;
- (bool)handleUniversalLinkWithUserActivity:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)openURLInSafariForURL:(id)arg1 fromNavigationController:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
