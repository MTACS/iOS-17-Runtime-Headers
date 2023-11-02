
@interface MPSetPlaybackSessionCommand : MPRemoteCommand {
    NSString * _currentPlaybackSessionIdentifier;
    NSString * _currentPlaybackSessionRevision;
    NSArray * _exportableSessionTypes;
    NSArray * _supportedSessionTypes;
}

@property (nonatomic, copy) NSString *currentPlaybackSessionIdentifier;
@property (nonatomic, copy) NSString *currentPlaybackSessionRevision;
@property (nonatomic, copy) NSArray *exportableSessionTypes;
@property (nonatomic, copy) NSArray *supportedSessionTypes;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (id)currentPlaybackSessionIdentifier;
- (id)currentPlaybackSessionRevision;
- (id)exportableSessionTypes;
- (void)setCurrentPlaybackSessionIdentifier:(id)arg1;
- (void)setCurrentPlaybackSessionRevision:(id)arg1;
- (void)setExportableSessionTypes:(id)arg1;
- (void)setSupportedSessionTypes:(id)arg1;
- (id)supportedSessionTypes;

@end
