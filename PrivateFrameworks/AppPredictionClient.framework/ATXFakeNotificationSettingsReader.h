
@interface ATXFakeNotificationSettingsReader : NSObject <ATXNotificationSettingsReaderProtocol> {
    bool  _defaultIsAppAllowed;
    bool  _defaultIsContactAllowed;
    NSArray * _digestDeliveryTimes;
    NSMutableDictionary * _entityToIsAllowed;
    NSMutableDictionary * _messagesBreakthrough;
    NSMutableDictionary * _sendToDigest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allConfiguredDigestApps;
- (bool)appIsOnAllowList:(id)arg1 dndModeUUID:(id)arg2;
- (bool)appIsOnAllowList:(id)arg1 mode:(unsigned long long)arg2;
- (bool)appIsOnDenyList:(id)arg1 dndModeUUID:(id)arg2;
- (unsigned long long)applicationConfigurationTypeForDNDModeUUID:(id)arg1 success:(bool*)arg2;
- (bool)contactIsOnAllowList:(id)arg1 dndModeUUID:(id)arg2;
- (bool)contactIsOnAllowList:(id)arg1 mode:(unsigned long long)arg2;
- (bool)contactIsOnDenyList:(id)arg1 dndModeUUID:(id)arg2;
- (bool)digestSetupComplete;
- (bool)doesAppAllowMessageBreakthrough:(id)arg1;
- (bool)doesAppSendNotificationsToDigest:(id)arg1;
- (id)init;
- (id)modeConfiguration:(id)arg1;
- (id)notificationDigestDeliveryTimes;
- (id)numConfiguredModes;
- (unsigned long long)senderConfigurationTypeForDNDModeUUID:(id)arg1 success:(bool*)arg2;
- (void)setDefaultNotificationDigestDeliveryTimes:(id)arg1;
- (void)setDefaultReturnValueForAppIsAllowed:(bool)arg1;
- (void)setDefaultReturnValueForContactIsAllowed:(bool)arg1;
- (void)setDoMessagesBreakthrough:(id)arg1 doesBreakthrough:(bool)arg2;
- (void)setDoesSendToDigest:(id)arg1 doesSend:(bool)arg2;
- (void)setIsAllowedForEntity:(id)arg1 isAllowed:(bool)arg2;

@end
