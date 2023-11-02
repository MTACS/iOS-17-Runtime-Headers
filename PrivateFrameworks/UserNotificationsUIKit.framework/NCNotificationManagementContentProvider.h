
@interface NCNotificationManagementContentProvider : NSObject <NCAuxiliaryOptionsProviding> {
    <NCNotificationManagementContentProviderDelegate> * _managementDelegate;
    NCNotificationRequest * _notificationRequest;
}

@property (nonatomic, readonly, copy) NSArray *auxiliaryOptionActions;
@property (nonatomic, readonly, copy) NSString *auxiliaryOptionsSummaryText;
@property (nonatomic, readonly, copy) UIColor *auxiliaryOptionsTextColor;
@property (nonatomic) bool auxiliaryOptionsVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <NCNotificationManagementContentProviderDelegate> *managementDelegate;
@property (nonatomic, retain) NCNotificationRequest *notificationRequest;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleManageAction:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 managementDelegate:(id)arg2;
- (id)managementDelegate;
- (id)notificationRequest;
- (void)setManagementDelegate:(id)arg1;
- (void)setNotificationRequest:(id)arg1;

@end
