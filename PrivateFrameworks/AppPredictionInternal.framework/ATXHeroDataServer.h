
@interface ATXHeroDataServer : NSObject <ATXHeroDataXPCInterface, NSXPCListenerDelegate> {
    ATXHeroAppManager * _heroAppManager;
    ATXHeroClipManager * _heroClipManager;
    ATXHeroPoiManager * _heroPoiManager;
    NSXPCListener * _listener;
    <ATXLocationManagerProtocol> * _locationManager;
    ATXHeroPredictionsTracker * _predictionsTracker;
    NSObject<OS_dispatch_queue> * _queue;
    <ATXPETEventTracker2Protocol> * _tracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addBundleIdsToPredictions:(id)arg1;
- (bool)_didPredictionsChange:(id)arg1;
- (void)_donateAppClipsToHeroClipManager:(id)arg1;
- (void)_donateHeroAppsToHeroAppManager:(id)arg1;
- (void)_donatePoiCategoriesToHeroPoiManager:(id)arg1;
- (id)_filterPredictions:(id)arg1 currentLocation:(id)arg2;
- (id)_heroAppPredictionsFromPredictions:(id)arg1;
- (id)_heroClipPredictionsFromPredictions:(id)arg1;
- (id)_heroPoiPredictionsFromPredictions:(id)arg1;
- (void)_setExpiry;
- (void)_setPredictionsInDefaults:(id)arg1;
- (void)addConfirmForAppClipWithHeroAppPrediction:(id)arg1 completion:(id /* block */)arg2;
- (void)addHardRejectForAppClipWithHeroAppPrediction:(id)arg1 completion:(id /* block */)arg2;
- (void)addSoftRejectForAppClipWithHeroAppPrediction:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)donateHeroAppPredictions:(id)arg1 completion:(id /* block */)arg2;
- (void)donatePredictions:(id)arg1 shouldOnlyDonateHeroPoiPredictions:(bool)arg2;
- (void)feedbackScoreForAppClipWithHeroAppPrediction:(id)arg1 completion:(id /* block */)arg2;
- (void)getCurrentHeroPoiCategoryWithCompletion:(id /* block */)arg1;
- (bool)heroAppAndClipPredictionsAreEligibleGivenIsMoving:(bool)arg1 isNearKnownTypeLOI:(bool)arg2 isNearFrequentLOI:(bool)arg3;
- (bool)heroPoiPredictionsAreEligibleGivenIsMoving:(bool)arg1 isNearKnownTypeLOIExcludingGym:(bool)arg2 isNearFrequentLOI:(bool)arg3;
- (id)init;
- (id)initWithHeroClipManager:(id)arg1 heroAppManager:(id)arg2 heroPoiManager:(id)arg3 tracker:(id)arg4 predictionsTracker:(id)arg5 locationManager:(id)arg6;
- (id)initWithHeroClipManager:(id)arg1 heroAppManager:(id)arg2 tracker:(id)arg3;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)openAppClipWithHeroAppPrediction:(id)arg1 completion:(id /* block */)arg2;
- (id)processPredictions:(id)arg1;
- (void)updateHeroAppManagerAndHeroClipManagerWithPredictions:(id)arg1;

@end
