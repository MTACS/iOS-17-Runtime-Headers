
@interface SUScriptMusicPlayerNativeObject : SUScriptNativeObject

- (void)_nowPlayingChangeNotification:(id)arg1;
- (void)_playbackStateChangeNotification:(id)arg1;
- (void)_volumeChangeNotification:(id)arg1;
- (void)destroyNativeObject;
- (void)setupNativeObject;

@end
