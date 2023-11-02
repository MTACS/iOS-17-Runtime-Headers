
@interface GEOMapDataSubscriptionRemoteDownloadManager : NSObject <GEOMapDataSubscriptionDownloadManager> {
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _configuredConnection;
    GEOXPCConnection * _connection;
    <GEOMapDataSubscriptionDownloadManagerDelegate> * _delegate;
    int  _geodLaunchedNotifyToken;
    NSObject<OS_dispatch_queue> * _incomingMessageQueue;
    NSMapTable * _states;
    geo_isolater * _statesLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GEOMapDataSubscriptionDownloadManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_connection;
- (void)_handleEvent:(id)arg1;
- (void)_receivedStateUpdate:(id)arg1;
- (void)_reconnectIfNecessary;
- (void)_startObservingStateForIdentifier:(id)arg1;
- (void)_stopObservingStateForIdentifier:(id)arg1;
- (void)cancelDownloadForSubscriptionIdentifiers:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)determineEstimatedSizeForSubscriptionWithRegion:(id)arg1 dataTypes:(unsigned long long)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchLastUpdatedDateForOfflineSubscriptionsWithQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchStateForSubscriptionWithIdentifier:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)forceUpdateForUserInitiatedSubscriptionsForDataType:(unsigned long long)arg1 mode:(unsigned long long)arg2;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)startDownloadForSubscriptionIdentifiers:(id)arg1 mode:(unsigned long long)arg2;

@end
