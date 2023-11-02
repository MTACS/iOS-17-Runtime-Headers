
@interface MPCDebugCommand : MPRemoteCommand {
    NSDictionary * _subsystemRevisions;
    NSArray * _supportedSubsystems;
}

@property (nonatomic, copy) NSDictionary *subsystemRevisions;
@property (nonatomic, copy) NSArray *supportedSubsystems;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;
- (void)setSubsystemRevisions:(id)arg1;
- (void)setSupportedSubsystems:(id)arg1;
- (id)subsystemRevisions;
- (id)supportedSubsystems;

@end
