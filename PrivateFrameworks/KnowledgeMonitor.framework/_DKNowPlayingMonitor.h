
@interface _DKNowPlayingMonitor : _DKMonitor {
    unsigned int  _bmSaveState;
    unsigned int  _lastPlaybackState;
    AVOutputContext * _outputContext;
    NSNumber * _previousAlbumStoreIdentifier;
    NSNumber * _previousArtistStoreIdentifier;
    _DKEvent * _previousEvent;
}

@property (nonatomic) unsigned int lastPlaybackState;
@property (nonatomic, retain) AVOutputContext *outputContext;

+ (id /* block */)_eventFilterBlock;
+ (id)_eventWithBundleIdentifier:(id)arg1 metadata:(id)arg2;
+ (id)entitlements;
+ (id)eventStream;
+ (void)setPlaybackState:(unsigned int)arg1 bundleId:(id)arg2 track:(id)arg3 outputDeviceIDs:(id)arg4 mediaType:(id)arg5 iTunesStoreIdentifier:(id)arg6 iTunesSubscriptionIdentifier:(id)arg7;
+ (bool)shouldMergeUnchangedEvents;

- (void).cxx_destruct;
- (id)_metadataFromInfo:(id)arg1 outputDevices:(id)arg2;
- (void)_nowPlayingInfoDidChange:(void*)arg1 outputDevices:(id)arg2;
- (void)_registerForNowPlayingNotifications;
- (void)_stripMetadata:(id)arg1 forBundleId:(id)arg2;
- (void)deactivate;
- (void)dealloc;
- (id)init;
- (unsigned int)lastPlaybackState;
- (id)outputContext;
- (void)outputDevicesDidChange:(id)arg1;
- (void)saveBMEventWithCurrent:(id)arg1 outputDevices:(id)arg2 artistStoreIdentifier:(id)arg3 albumStoreIdentifier:(id)arg4;
- (void)setLastPlaybackState:(unsigned int)arg1;
- (void)setOutputContext:(id)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;

@end
