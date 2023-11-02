
@interface MPPreloadPlaybackSessionCommand : MPRemoteCommand {
    NSArray * _supportedSessionTypes;
}

@property (nonatomic, copy) NSArray *supportedSessionTypes;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (void)setSupportedSessionTypes:(id)arg1;
- (id)supportedSessionTypes;

@end
