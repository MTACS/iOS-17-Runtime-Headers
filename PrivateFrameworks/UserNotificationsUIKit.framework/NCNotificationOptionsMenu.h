
@interface NCNotificationOptionsMenu : NSObject <UIContextMenuInteractionDelegate> {
    UIContextMenuInteraction * _menu;
    bool  _optionsForSection;
    UIView * _presentingView;
    NCNotificationRequest * _request;
    <NCNotificationOptionsMenuSettingsDelegate> * _settingsDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIContextMenuInteraction *menu;
@property (getter=areOptionsForSection, nonatomic) bool optionsForSection;
@property (nonatomic, retain) UIView *presentingView;
@property (nonatomic, retain) NCNotificationRequest *request;
@property (nonatomic, retain) <NCNotificationOptionsMenuSettingsDelegate> *settingsDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addToContactsAction;
- (bool)_canAddToContacts;
- (id)_clearSectionAction;
- (id)_criticalOffAction;
- (id)_criticalOnAction;
- (id)_customSettingsActionForSectionSettings:(id)arg1;
- (id)_deliverImmediatelyAcion;
- (bool)_didApplicationBreakthroughMode:(id)arg1;
- (bool)_didBreakthroughMode:(id)arg1;
- (bool)_didContactBreakthroughMode:(id)arg1;
- (bool)_isApplicationAllowedForMode:(id)arg1;
- (bool)_isCommunicationThread;
- (bool)_isContactAllowedForMode:(id)arg1;
- (id)_muteForOneHourAction;
- (id)_muteForTodayAction;
- (id)_offActionForApplicationForMode:(id)arg1;
- (id)_offActionForContactForMode:(id)arg1;
- (id)_offActionWithSectionDisplayName:(id)arg1;
- (id)_onActionWithSectionDisplayName:(id)arg1;
- (id)_sectionIdentifier;
- (id)_sendToDigestAction;
- (id)_sender;
- (id)_settingsActionForSectionSettings:(id)arg1;
- (id)_threadIdentifierOrNil;
- (id)_threadName;
- (id)_timeSensitiveOffAction;
- (id)_timeSensitiveOnAction;
- (id)_unmuteActionForMuteAssertionLevel:(unsigned long long)arg1;
- (bool)areOptionsForSection;
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 highlightPreviewForItemWithIdentifier:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)dismissMenu;
- (id)initWithNotificationRequest:(id)arg1 presentingView:(id)arg2 settingsDelegate:(id)arg3 optionsForSection:(bool)arg4;
- (id)menu;
- (void)presentMenu;
- (id)presentingView;
- (id)request;
- (void)setMenu:(id)arg1;
- (void)setOptionsForSection:(bool)arg1;
- (void)setPresentingView:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setSettingsDelegate:(id)arg1;
- (id)settingsDelegate;

@end
