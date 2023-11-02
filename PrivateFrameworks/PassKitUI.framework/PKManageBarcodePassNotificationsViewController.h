
@interface PKManageBarcodePassNotificationsViewController : PKDynamicTableViewController <PKBarcodePassDetailsNotificationSettingsSectionControllerDelegate> {
    PKBarcodePassDetailsNotificationSettingsSectionController * _notificationsSectionController;
    PKPass * _pass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canShowForPass:(id)arg1;

- (void).cxx_destruct;
- (id)initWithPass:(id)arg1;
- (void)recomputeMappedSectionsAndReloadSections:(id)arg1;

@end
