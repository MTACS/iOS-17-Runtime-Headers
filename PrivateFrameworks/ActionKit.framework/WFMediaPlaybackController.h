
@interface WFMediaPlaybackController : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    void * _reconSession;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) void*reconSession;

+ (id)bundleIdentifierForMediaPlaybackApplication:(unsigned long long)arg1;
+ (id)songPropertySet;

- (void).cxx_destruct;
- (void)clearQueueWithCompletion:(id /* block */)arg1;
- (void)connectToEndpoint:(id)arg1 completion:(id /* block */)arg2;
- (void)connectToExternalDevice:(id)arg1 completion:(id /* block */)arg2;
- (id)createSendCommandError:(unsigned int)arg1;
- (void)getActivePlayerPathWithCompletion:(id /* block */)arg1;
- (void)getCurrentlyPlayingMediaWithCompletion:(id /* block */)arg1;
- (void)getLocalPlaybackCapabilityWithCompletion:(id /* block */)arg1;
- (void)getPreferredMediaControlDestinationForOutputDeviceUIDs:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getPreferredMediaControlOriginWithCompletion:(id /* block */)arg1;
- (void)getPreferredPlaybackDestinationForPlaybackArchive:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getPreferredPlaybackOriginWithCompletion:(id /* block */)arg1;
- (void)getRemoteControlEndpointsMatchingUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)goToBeginningOfTrackOnDevicesWithUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)goToNextTrackOnDevicesWithUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)goToPreviousTrackOnDevicesWithUIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)pauseOnDevicesWithUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)playOnDevicesWithUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)playPauseOnDevicesWithUIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)queue;
- (void)queueItemsWithIdentifierSets:(id)arg1 inAdditionMode:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)queueMediaItems:(id)arg1 inAdditionMode:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)queueiTunesStoreItems:(id)arg1 inAdditionMode:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void*)reconSession;
- (void)sendCommand:(unsigned int)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)sendCommand:(unsigned int)arg1 origin:(void*)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)sendCommand:(unsigned int)arg1 playerPath:(void*)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)sendCommandToDevicesWithUIDs:(unsigned int)arg1 deviceUIDs:(id)arg2 options:(id)arg3 sendTwice:(bool)arg4 completion:(id /* block */)arg5;
- (void)setReconSession:(void*)arg1;
- (void)skipBackwardOnDevicesWithUIDs:(id)arg1 interval:(double)arg2 completion:(id /* block */)arg3;
- (void)skipForwardOnDevicesWithUIDs:(id)arg1 interval:(double)arg2 completion:(id /* block */)arg3;
- (void)skipToPositionOnDevicesWithUIDs:(id)arg1 interval:(double)arg2 completion:(id /* block */)arg3;

@end
