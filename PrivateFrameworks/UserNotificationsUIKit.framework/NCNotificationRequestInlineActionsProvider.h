
@interface NCNotificationRequestInlineActionsProvider : NSObject <NCAuxiliaryOptionsProviding> {
    bool  _auxiliaryOptionsVisible;
    <NCNotificationRequestInlineActionsProviderDelegate> * _delegate;
    NCNotificationRequest * _notificationRequest;
}

@property (nonatomic, readonly, copy) NSArray *auxiliaryOptionActions;
@property (nonatomic, readonly, copy) NSString *auxiliaryOptionsSummaryText;
@property (nonatomic, readonly, copy) UIColor *auxiliaryOptionsTextColor;
@property (nonatomic) bool auxiliaryOptionsVisible;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationRequestInlineActionsProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NCNotificationRequest *notificationRequest;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_primaryAction;
- (id)_secondaryAction;
- (id)auxiliaryOptionActions;
- (bool)auxiliaryOptionsVisible;
- (id)delegate;
- (void)handlePrimaryAction:(id)arg1;
- (void)handleSecondaryAction:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 delegate:(id)arg2;
- (id)notificationRequest;
- (void)setAuxiliaryOptionsVisible:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNotificationRequest:(id)arg1;

@end
