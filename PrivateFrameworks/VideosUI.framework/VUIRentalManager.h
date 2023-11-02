
@interface VUIRentalManager : NSObject <MPStoreDownloadManagerObserver> {
    NSMutableSet * _deferredRentalCheckinContexts;
    bool  _initialRentalsFetched;
    bool  _initialized;
    bool  _needToSendPlaybackStartDatesToServer;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableSet *deferredRentalCheckinContexts;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool initialRentalsFetched;
@property (nonatomic) bool initialized;
@property (nonatomic) bool needToSendPlaybackStartDatesToServer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_activeAccountDidChange:(id)arg1;
- (void)_checkInRentalsNeedingCheckIn;
- (void)_didFetchInitialDownloads:(id)arg1;
- (id)_init;
- (void)_networkReachbilityDidChange:(id)arg1;
- (void)_sendPlaybackStartDatesToServerIfNecessary;
- (void)checkInRentalWithID:(id)arg1 dsid:(id)arg2 completion:(id /* block */)arg3;
- (void)checkOutRentalWithID:(id)arg1 dsid:(id)arg2 checkoutType:(unsigned long long)arg3 startPlaybackClock:(bool)arg4 completion:(id /* block */)arg5;
- (void)dealloc;
- (id)deferredRentalCheckinContexts;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (bool)initialRentalsFetched;
- (void)initializeRentals;
- (bool)initialized;
- (bool)needToSendPlaybackStartDatesToServer;
- (id)serialQueue;
- (void)setDeferredRentalCheckinContexts:(id)arg1;
- (void)setInitialRentalsFetched:(bool)arg1;
- (void)setInitialized:(bool)arg1;
- (void)setNeedToSendPlaybackStartDatesToServer:(bool)arg1;
- (void)setSerialQueue:(id)arg1;

@end
