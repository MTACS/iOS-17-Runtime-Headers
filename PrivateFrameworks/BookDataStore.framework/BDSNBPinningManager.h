
@interface BDSNBPinningManager : NSObject {
    BDSServiceProxy * _serviceProxy;
}

@property (nonatomic, retain) BDSServiceProxy *serviceProxy;

- (void).cxx_destruct;
- (void)audiobookStoreEnabledWithCompletion:(id /* block */)arg1;
- (void)fetchMostRecentAudiobookWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)serviceProxy;
- (void)setServiceProxy:(id)arg1;
- (void)updateBitrateForItemWithAdamID:(id)arg1 completion:(id /* block */)arg2;
- (id)updateReadingNowWithCompletion:(id /* block */)arg1;
- (id)updateWantToReadAndReadingNowWithJaliscoUpdateSuccessful:(bool)arg1 completion:(id /* block */)arg2;
- (id)updateWantToReadWithCompletion:(id /* block */)arg1;

@end
