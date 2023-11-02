
@interface PKManagePaymentPassNotificationsViewController : PKDynamicTableViewController <PKPaymentPassDetailsNotificationSettingsSectionControllerDelegate> {
    PKPaymentDefaultDataProvider * _defaultDataProvider;
    PKPaymentPassDetailsNotificationSettingsSectionController * _notificationsSectionController;
    PKPaymentPass * _pass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canShowForPass:(id)arg1 dataProvider:(id)arg2 peerPaymentAccount:(id)arg3 account:(id)arg4;

- (void).cxx_destruct;
- (void)didSelectEditNotificationSettings:(id)arg1;
- (id)initWithPass:(id)arg1 dataProvider:(id)arg2 peerPaymentAccount:(id)arg3 account:(id)arg4 transactionSourceCollection:(id)arg5;
- (void)recomputeMappedSectionsAndReloadSections:(id)arg1;

@end
