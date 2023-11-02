
@interface SAPhoneVoiceMailSnippet : SAUISnippet

@property (nonatomic, copy) NSNumber *autoPlay;
@property (nonatomic, copy) NSArray *calls;
@property (nonatomic, copy) NSArray *playVoiceMailCommands;
@property (nonatomic, retain) <SAClientBoundCommand> *postPlayCommand;

+ (id)voiceMailSnippet;
+ (id)voiceMailSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)autoPlay;
- (id)calls;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)playVoiceMailCommands;
- (id)postPlayCommand;
- (void)setAutoPlay:(id)arg1;
- (void)setCalls:(id)arg1;
- (void)setPlayVoiceMailCommands:(id)arg1;
- (void)setPostPlayCommand:(id)arg1;

@end
