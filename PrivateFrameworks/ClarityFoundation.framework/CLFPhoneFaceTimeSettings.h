
@interface CLFPhoneFaceTimeSettings : CLFBaseSettings

@property (nonatomic) bool dialerKeypadEnabled;
@property (nonatomic) bool inCallKeypadEnabled;
@property (nonatomic, retain) NSString *incomingCommunicationLimit;
@property (nonatomic) bool muteEnabled;
@property (nonatomic) bool recentsEnabled;
@property (nonatomic) bool speakerOptionEnabled;

+ (id)allPreferenceSelectorsAsStrings;
+ (id)domainName;
+ (id)sharedInstance;

- (bool)dialerKeypadEnabled;
- (bool)inCallKeypadEnabled;
- (id)incomingCommunicationLimit;
- (id)init;
- (bool)muteEnabled;
- (bool)recentsEnabled;
- (void)setDialerKeypadEnabled:(bool)arg1;
- (void)setInCallKeypadEnabled:(bool)arg1;
- (void)setIncomingCommunicationLimit:(id)arg1;
- (void)setMuteEnabled:(bool)arg1;
- (void)setRecentsEnabled:(bool)arg1;
- (void)setSpeakerOptionEnabled:(bool)arg1;
- (bool)speakerOptionEnabled;

@end
