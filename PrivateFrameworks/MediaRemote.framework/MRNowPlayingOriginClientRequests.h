
@interface MRNowPlayingOriginClientRequests : NSObject <MRNowPlayingClientState> {
    MRDeviceInfo * _deviceInfo;
    NSMutableArray * _deviceInfoCompletions;
    NSDate * _lastPlayingDate;
    NSMutableArray * _lastPlayingDateCompletions;
    NSMutableArray * _nowPlayingClients;
    MROrigin * _origin;
    MRPlayerPath * _playerPath;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSNumber * _volume;
    NSNumber * _volumeCapabilities;
    NSMutableArray * _volumeCapabilitiesCompletions;
    NSMutableArray * _volumeCompletions;
}

@property (nonatomic, copy) MRDeviceInfo *deviceInfo;
@property (nonatomic, retain) NSDate *lastPlayingDate;
@property (nonatomic, readonly) NSArray *nowPlayingClientRequests;
@property (nonatomic, readonly) MROrigin *origin;
@property (nonatomic, readonly) MRPlayerPath *playerPath;
@property (nonatomic, retain) NSNumber *volume;
@property (nonatomic, retain) NSNumber *volumeCapabilities;

- (void).cxx_destruct;
- (void)dealloc;
- (id)debugDescription;
- (id)deviceInfo;
- (id)existingNowPlayingClientRequestsForPlayerPath:(id)arg1;
- (void)handleDeviceInfoRequestWithCompletion:(id /* block */)arg1;
- (void)handleLastPlayingDateRequestWithCompletion:(id /* block */)arg1;
- (void)handleVolumeCapabilitiesRequestWithCompletion:(id /* block */)arg1;
- (void)handleVolumeRequestWithCompletion:(id /* block */)arg1;
- (id)initWithOrigin:(id)arg1;
- (id)lastPlayingDate;
- (id)nowPlayingClientRequests;
- (id)nowPlayingClientRequestsForPlayerPath:(id)arg1;
- (id)origin;
- (id)playerPath;
- (void)removeAllClients;
- (void)removeClient:(id)arg1;
- (void)restoreNowPlayingClientState;
- (void)setDeviceInfo:(id)arg1;
- (void)setLastPlayingDate:(id)arg1;
- (void)setVolume:(id)arg1;
- (void)setVolumeCapabilities:(id)arg1;
- (id)volume;
- (id)volumeCapabilities;

@end
