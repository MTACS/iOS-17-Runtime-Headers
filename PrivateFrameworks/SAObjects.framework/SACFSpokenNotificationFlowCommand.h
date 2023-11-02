
@interface SACFSpokenNotificationFlowCommand : SACFAbstractClientCommand

@property (nonatomic, retain) SAAppInfo *appInfo;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSString *notificationID;
@property (nonatomic, copy) NSString *outputVoiceLanguageCode;
@property (nonatomic) bool shouldPromptUser;
@property (nonatomic, copy) NSString *userAgent;
@property (nonatomic, copy) NSString *userInterfaceIdiom;

+ (id)spokenNotificationFlowCommand;
+ (id)spokenNotificationFlowCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)appInfo;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)languageCode;
- (bool)mutatingCommand;
- (id)notificationID;
- (id)outputVoiceLanguageCode;
- (bool)requiresResponse;
- (void)setAppInfo:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setNotificationID:(id)arg1;
- (void)setOutputVoiceLanguageCode:(id)arg1;
- (void)setShouldPromptUser:(bool)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setUserInterfaceIdiom:(id)arg1;
- (bool)shouldPromptUser;
- (id)userAgent;
- (id)userInterfaceIdiom;

@end
