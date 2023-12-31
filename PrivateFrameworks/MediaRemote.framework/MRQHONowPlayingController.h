
@interface MRQHONowPlayingController : NSObject {
    MRArtwork * _cachedNowPlayingArtwork;
    NSString * _cachedNowPlayingArtworkIdentifier;
    MRClient * _client;
    NSMutableArray * _deferredContentItemsToMerge;
    <MRQHONowPlayingControllerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    MRAVEndpoint * _endpoint;
    MRAVEndpointObserver * _endpointObserver;
    NSString * _endpointObserverGroupUID;
    MRPlayer * _player;
    id  _playerPathInvalidationObserver;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registeredForEndpointChanges;
    bool  _registeredForNotifications;
    bool  _registeredForPlayerPathInvalidations;
    bool  _requestingQueue;
    MRPlayerPath * _resolvedPlayerPath;
    MRNowPlayingPlayerResponse * _response;
    NSString * _uid;
    MRPlayerPath * _unresolvedPlayerPath;
    bool  _updateLoadingEnabled;
}

@property (nonatomic, retain) MRArtwork *cachedNowPlayingArtwork;
@property (nonatomic, retain) NSString *cachedNowPlayingArtworkIdentifier;
@property (nonatomic, readonly) MRClient *client;
@property (nonatomic, retain) NSMutableArray *deferredContentItemsToMerge;
@property (nonatomic) <MRQHONowPlayingControllerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, retain) MRAVEndpoint *endpoint;
@property (nonatomic, retain) MRAVEndpointObserver *endpointObserver;
@property (nonatomic, retain) NSString *endpointObserverGroupUID;
@property (nonatomic, readonly) MRPlayer *player;
@property (nonatomic, retain) id playerPathInvalidationObserver;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool registeredForEndpointChanges;
@property (nonatomic) bool registeredForNotifications;
@property (nonatomic) bool registeredForPlayerPathInvalidations;
@property (nonatomic) bool requestingQueue;
@property (nonatomic, retain) MRPlayerPath *resolvedPlayerPath;
@property (nonatomic, copy) MRNowPlayingPlayerResponse *response;
@property (nonatomic, readonly) NSString *uid;
@property (nonatomic, retain) MRPlayerPath *unresolvedPlayerPath;
@property (nonatomic) bool updateLoadingEnabled;

+ (id)localRouteController;
+ (id)proactiveEndpointController;

- (void).cxx_destruct;
- (void)_createPlayerPathForEndpoint:(id)arg1 client:(id)arg2 player:(id)arg3 completion:(id /* block */)arg4;
- (void)_downloadContentItemArtwork:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleActiveSystemEndpointChangedNotification:(id)arg1;
- (void)_handlePlaybackQueueChangedNotification:(id)arg1;
- (void)_handlePlaybackQueueContentItemsArtworkChangedNotification:(id)arg1;
- (void)_handlePlaybackQueueContentItemsChangedNotification:(id)arg1;
- (void)_handlePlaybackStateChangedNotification:(id)arg1;
- (void)_handleSupportedCommandsChangedNotification:(id)arg1;
- (void)_loadNowPlayingStateForEndpoint:(id)arg1 client:(id)arg2 player:(id)arg3 completion:(id /* block */)arg4;
- (id)_loadNowPlayingStateForPlayerPath:(id)arg1 error:(id*)arg2;
- (void)_loadNowPlayingStateForUID:(id)arg1 client:(id)arg2 player:(id)arg3 completion:(id /* block */)arg4;
- (void)_notifyDelegateOfError:(id)arg1;
- (void)_notifyDelegateOfInvalidation;
- (void)_notifyDelegateOfNewResponse:(id)arg1;
- (void)_notifyDelegateOfPlaybackQueueChangeFromOldQueue:(id)arg1 toNewQueue:(id)arg2;
- (void)_notifyDelegateOfPlaybackStateChangeFromOldState:(unsigned int)arg1 toNewState:(unsigned int)arg2;
- (void)_notifyDelegateOfSupportedCommandsChangeFromOldCommands:(id)arg1 toNewCommands:(id)arg2;
- (void)_notifyDelegateOfUpdatedArtwork:(id)arg1;
- (void)_notifyDelegateOfUpdatedContentItems:(id)arg1;
- (void)_notifyDelegateOfUpdatedDeviceLastPlayingDate:(id)arg1;
- (void)_notifyDelegateOfUpdatedPlayerLastPlayingDate:(id)arg1;
- (void)_onQueue_clearState;
- (void)_onQueue_requestAndUpdateArtworkForContentItems:(id)arg1 forPlayerPath:(id)arg2 withReason:(id)arg3;
- (void)_onQueue_requestPlaybackQueueForPlayerPath:(id)arg1 includeArtwork:(bool)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)_onQueue_retrieveEndpointForUID:(id)arg1 completion:(id /* block */)arg2;
- (id)_onQueue_updateByMergingContentItemChanges:(id)arg1;
- (void)_onQueue_updateByReplacingWithNewResponse:(id)arg1;
- (void)_onQueue_updateWithNewDeviceLastPlayingDate:(id)arg1;
- (void)_onQueue_updateWithNewPlaybackQueue:(id)arg1;
- (void)_onQueue_updateWithNewPlaybackState:(unsigned int)arg1;
- (void)_onQueue_updateWithNewPlayerLastPlayingDate:(id)arg1;
- (void)_onQueue_updateWithNewSupportedCommands:(id)arg1;
- (void)_registerForEndpointChangesIfNeeded;
- (void)_registerForPlayerPathInvalidationsIfNeeded;
- (void)_registerNotificationHandlersIfNeeded;
- (void)_reloadForCompleteInvalidation;
- (void)_reloadForPlayerPathInvalidation;
- (void)_requestContentItemArtwork:(id)arg1 forPlayerPath:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)_requestPlayerLastPlayingDateForPlayerPath:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)_requestSupportedCommandsForPlayerPath:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)_resolvePlayerPath:(id)arg1 completion:(id /* block */)arg2;
- (void)_unregisterForEndpointChanges;
- (void)_unregisterForPlayerPathInvalidations;
- (void)_unregisterNotificationHandlers;
- (void)beginLoadingUpdates;
- (id)cachedNowPlayingArtwork;
- (id)cachedNowPlayingArtworkIdentifier;
- (id)client;
- (void)dealloc;
- (id)deferredContentItemsToMerge;
- (id)delegate;
- (id)delegateQueue;
- (void)endLoadingUpdates;
- (id)endpoint;
- (id)endpointObserver;
- (id)endpointObserverGroupUID;
- (id)initWithUID:(id)arg1;
- (id)initWithUID:(id)arg1 client:(id)arg2 player:(id)arg3;
- (id)player;
- (id)playerPathInvalidationObserver;
- (id)queue;
- (bool)registeredForEndpointChanges;
- (bool)registeredForNotifications;
- (bool)registeredForPlayerPathInvalidations;
- (bool)requestingQueue;
- (id)resolvedPlayerPath;
- (id)response;
- (void)setCachedNowPlayingArtwork:(id)arg1;
- (void)setCachedNowPlayingArtworkIdentifier:(id)arg1;
- (void)setDeferredContentItemsToMerge:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setEndpointObserver:(id)arg1;
- (void)setEndpointObserverGroupUID:(id)arg1;
- (void)setPlayerPathInvalidationObserver:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRegisteredForEndpointChanges:(bool)arg1;
- (void)setRegisteredForNotifications:(bool)arg1;
- (void)setRegisteredForPlayerPathInvalidations:(bool)arg1;
- (void)setRequestingQueue:(bool)arg1;
- (void)setResolvedPlayerPath:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setUnresolvedPlayerPath:(id)arg1;
- (void)setUpdateLoadingEnabled:(bool)arg1;
- (id)uid;
- (id)unresolvedPlayerPath;
- (bool)updateLoadingEnabled;

@end
