
@interface CDMShortcutResponseCommand : CDMBaseCommand {
    NSArray * _autoShortcutParses;
    NSArray * _voiceCommandsUserParses;
}

@property (nonatomic, readonly) NSArray *autoShortcutParses;
@property (nonatomic, readonly) NSArray *voiceCommandsUserParses;

- (void).cxx_destruct;
- (id)autoShortcutParses;
- (id)initWithVoiceCommandUserParses:(id)arg1 autoShortcutParses:(id)arg2;
- (id)voiceCommandsUserParses;

@end
