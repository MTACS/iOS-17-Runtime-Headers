
@interface MRSetDefaultSupportedCommandsMessage : MRProtocolMessage {
    MRNowPlayingState * _state;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSArray *supportedCommands;

- (void).cxx_destruct;
- (id)bundleID;
- (id)initWithDefaultSupportedCommands:(id)arg1 forPlayerPath:(id)arg2 encoding:(long long)arg3;
- (id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2;
- (id)supportedCommands;
- (unsigned long long)type;

@end
