
@interface CLFMessagesSettings : CLFBaseSettings

@property (nonatomic, retain) NSString *communicationLimit;
@property (nonatomic) bool conversationDetailsEnabled;
@property (nonatomic) bool emojiKeyboardEnabled;
@property (nonatomic, retain) NSString *incomingCommunicationLimit;
@property (nonatomic) bool softwareKeyboardEnabled;
@property (nonatomic) bool tapToSpeakEnabled;
@property (nonatomic) bool videoRecordingEnabled;

+ (id)allPreferenceSelectorsAsStrings;
+ (id)domainName;
+ (id)sharedInstance;

- (id)communicationLimit;
- (bool)conversationDetailsEnabled;
- (bool)emojiKeyboardEnabled;
- (id)incomingCommunicationLimit;
- (id)init;
- (void)setCommunicationLimit:(id)arg1;
- (void)setConversationDetailsEnabled:(bool)arg1;
- (void)setEmojiKeyboardEnabled:(bool)arg1;
- (void)setIncomingCommunicationLimit:(id)arg1;
- (void)setSoftwareKeyboardEnabled:(bool)arg1;
- (void)setTapToSpeakEnabled:(bool)arg1;
- (void)setVideoRecordingEnabled:(bool)arg1;
- (bool)softwareKeyboardEnabled;
- (bool)tapToSpeakEnabled;
- (bool)videoRecordingEnabled;

@end
