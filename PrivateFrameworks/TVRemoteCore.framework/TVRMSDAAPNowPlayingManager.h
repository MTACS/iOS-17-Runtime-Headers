
@interface TVRMSDAAPNowPlayingManager : NSObject {
    NSURLSessionDataTask * _artworkRequest;
    long long  _artworkRequestBackoffInterval;
    NSObject<OS_dispatch_source> * _artworkRetryTimer;
    NSURLSessionDataTask * _audioRoutesRequest;
    TVRMSControlInterface * _controlInterface;
    NSString * _currentArtworkIdentifier;
    NSArray * _currentAudioRoutes;
    TVRMSNowPlayingInfo * _currentNowPlayingInfo;
    <TVRMSDAAPNowPlayingManagerDelegate> * _delegate;
    bool  _isObserving;
    NSNumber * _lastVolume;
    NSURLSessionDataTask * _nowPlayingInfoRequest;
    bool  _observing;
    long long  _requestBackoffInterval;
    TVRMSDAAPRequestManager * _requestManager;
    NSURLSessionDataTask * _volumeRequest;
}

@property (nonatomic, retain) TVRMSControlInterface *controlInterface;
@property (nonatomic) <TVRMSDAAPNowPlayingManagerDelegate> *delegate;
@property (getter=isObserving, nonatomic, readonly) bool observing;

- (void).cxx_destruct;
- (bool)_audioRoutes:(id)arg1 equalAudioRoutes:(id)arg2;
- (void)_cancelArtworkRetryTimer;
- (void)_refreshNowPlayingInfoRequest;
- (void)_requestArtworkDataIfNecessaryForNowPlayingInfo:(id)arg1;
- (void)_requestAudioRoutes;
- (void)_requestNowPlayingInfoWithCompletionHandler:(id /* block */)arg1;
- (void)_requestVolume;
- (void)_scheduleArtworkRetryForNowPlayingInfo:(id)arg1 delay:(double)arg2;
- (void)beginObservingNowPlaying;
- (id)controlInterface;
- (id)delegate;
- (void)endObservingNowPlaying;
- (id)initWithRequestManager:(id)arg1;
- (bool)isObserving;
- (void)setControlInterface:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
