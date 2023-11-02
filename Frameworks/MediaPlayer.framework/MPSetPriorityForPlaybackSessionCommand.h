
@interface MPSetPriorityForPlaybackSessionCommand : MPRemoteCommand {
    NSArray * _preloadedSessions;
}

@property (nonatomic, copy) NSArray *preloadedSessions;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (id)preloadedSessions;
- (void)setPreloadedSessions:(id)arg1;

@end
