
@interface AssistantHistoryViewController : PSListController {
    <AssistantHistoryDelegate> * _delegate;
    PSDeleteButtonCell * _deleteButtonCell;
    UIActivityIndicatorView * _indicatorView;
    AFSettingsConnection * _settingsConnection;
}

@property (nonatomic) <AssistantHistoryDelegate> *delegate;

- (void).cxx_destruct;
- (void)_animateSpinnerIn;
- (void)_deleteSiriHistory;
- (id)_deletionResponseAlertForFailure;
- (void)_endIndicatorViewSpinning;
- (long long)_getDataSharingOptInStatus;
- (void)_handleDeleteSiriHistoryButtonPress;
- (void)_presentErrorAlert;
- (void)_presentPrivacySheet;
- (void)_startIndicatorViewSpinning;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)specifiers;

@end
