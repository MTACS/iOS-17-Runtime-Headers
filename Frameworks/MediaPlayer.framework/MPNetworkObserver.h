
@interface MPNetworkObserver : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    int  _musicCellularNetworkingAllowedNotifyToken;
    long long  _networkUsageCount;
    bool  _videosAllowsCellularStreaming;
    int  _videosPreferencesChangedToken;
}

@property (nonatomic, readonly) bool isUsingNetwork;
@property (getter=isMusicCellularDownloadingAllowed, nonatomic) bool musicCellularDownloadingAllowed;
@property (getter=isMusicCellularStreamingAllowed, nonatomic) bool musicCellularStreamingAllowed;
@property (getter=isStoreCellularNetworkingAllowed, nonatomic, readonly) bool storeCellularNetworkingAllowed;
@property (getter=isVideoCellularStreamingAllowed, nonatomic) bool videoCellularStreamingAllowed;

+ (id)sharedNetworkObserver;

- (void).cxx_destruct;
- (id)_init;
- (void)beginUsingNetwork;
- (void)dealloc;
- (void)endUsingNetwork;
- (id)init;
- (bool)isMusicCellularDownloadingAllowed;
- (bool)isMusicCellularStreamingAllowed;
- (bool)isStoreCellularNetworkingAllowed;
- (bool)isUsingNetwork;
- (bool)isVideoCellularStreamingAllowed;
- (void)setMusicCellularDownloadingAllowed:(bool)arg1;
- (void)setMusicCellularStreamingAllowed:(bool)arg1;
- (void)setVideoCellularStreamingAllowed:(bool)arg1;

@end
