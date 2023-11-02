
@interface CKConversationConfirmationAlertsController : NSObject {
    long long  _alertControllerStyle;
    NSArray * _junkConversations;
    UIViewController * _presentationViewController;
    NSArray * _selectedConversations;
}

@property (nonatomic) long long alertControllerStyle;
@property (nonatomic, retain) NSArray *junkConversations;
@property (nonatomic, retain) UIViewController *presentationViewController;
@property (nonatomic, retain) NSArray *selectedConversations;

- (void).cxx_destruct;
- (void)_configureAppearanceForAlertController:(id)arg1;
- (id)_conversationDeletionAlertMessageForConversationCount:(unsigned long long)arg1;
- (bool)_hasChatSharingLocationInConversations:(id)arg1;
- (id)_identifyBusinessConversationToRemove:(id)arg1;
- (id)_identifySpamConversationsToRemove:(id)arg1;
- (bool)_isStoredOnIcloud;
- (id)_junkRecoveryAlertMessageForCount:(unsigned long long)arg1;
- (id)_junkRecoveryAlertTitleForCount:(unsigned long long)arg1;
- (void)_markConversationsAsSpam:(id)arg1;
- (id)_moveToRecentlyDeletedAlertMessageForMessagesCount:(unsigned long long)arg1;
- (id)_moveToRecentlyDeletedAlertTitleForConversationsCount:(unsigned long long)arg1;
- (id)_moveToRecentlyDeletedAlertTitleForMessagesCount:(unsigned long long)arg1;
- (unsigned long long)_numberOfRecoverableMessagesInConversations:(id)arg1;
- (id)_permanentDeletionAlertMessageForCount:(unsigned long long)arg1;
- (id)_permanentDeletionAlertTitleForCount:(unsigned long long)arg1;
- (id)_permanentJunkDeletionAlertTitleForCount:(unsigned long long)arg1;
- (void)_presentEndBusinessChatConfirmationForBusinessConversation:(id)arg1 actionCompletionBlock:(id /* block */)arg2;
- (void)_presentRecoverableDeletionConfirmationWithConfirmedBlock:(id /* block */)arg1 cancelBlock:(id /* block */)arg2;
- (void)_presentStopSharingLocationConfirmationWithActionCompletionBlock:(id /* block */)arg1;
- (id)_recoveryAlertMessageForBlockedConversationsCount:(unsigned long long)arg1 allowedConversationsCount:(unsigned long long)arg2;
- (id)_recoveryAlertMessageForMessagesCount:(unsigned long long)arg1;
- (id)_recoveryAlertTitleForBlockedConversationsCount:(unsigned long long)arg1 allowedConversationsCount:(unsigned long long)arg2;
- (id)_recoveryAlertTitleForMessagesCount:(unsigned long long)arg1;
- (id)_reportSpamConfirmationMessageForJunkConversations;
- (bool)_shouldConfirmStopSharingLocationForConversations:(id)arg1;
- (id)_spamReportDestinationsForJunkConversations;
- (void)_stopSharingLocationInConversations:(id)arg1;
- (void)_trackEvent:(long long)arg1 forConversations:(id)arg2;
- (long long)alertControllerStyle;
- (id)junkConversations;
- (void)presentPermanentDeletionConfirmationFromViewController:(id)arg1 forConversations:(id)arg2 alertControllerStyle:(long long)arg3 alertsCompletedBlock:(id /* block */)arg4 cancelBlock:(id /* block */)arg5;
- (void)presentPermanentJunkDeletionConfirmationFromViewController:(id)arg1 forConversations:(id)arg2 alertControllerStyle:(long long)arg3 alertsCompletedBlock:(id /* block */)arg4 cancelBlock:(id /* block */)arg5;
- (void)presentRecoverDeletedConversationsConfirmationFromViewController:(id)arg1 forConversations:(id)arg2 alertControllerStyle:(long long)arg3 alertsCompletedBlock:(id /* block */)arg4 cancelBlock:(id /* block */)arg5;
- (void)presentRecoverJunkConversationsConfirmationFromViewController:(id)arg1 forConversations:(id)arg2 alertControllerStyle:(long long)arg3 alertsCompletedBlock:(id /* block */)arg4 cancelBlock:(id /* block */)arg5;
- (void)presentRecoverableDeletionConfirmationsFromViewController:(id)arg1 forConversations:(id)arg2 alertControllerStyle:(long long)arg3 alertsCompletedBlock:(id /* block */)arg4 cancelBlock:(id /* block */)arg5;
- (void)presentRecoverableDeletionConfirmationsFromViewController:(id)arg1 forMessagesCount:(unsigned long long)arg2 alertControllerStyle:(long long)arg3 sender:(id)arg4 alertsCompletedBlock:(id /* block */)arg5 cancelBlock:(id /* block */)arg6;
- (id)presentationViewController;
- (id)selectedConversations;
- (void)setAlertControllerStyle:(long long)arg1;
- (void)setJunkConversations:(id)arg1;
- (void)setPresentationViewController:(id)arg1;
- (void)setSelectedConversations:(id)arg1;

@end
