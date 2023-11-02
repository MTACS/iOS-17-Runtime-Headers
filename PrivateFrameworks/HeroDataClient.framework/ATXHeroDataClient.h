
@interface ATXHeroDataClient : NSObject <ATXHeroDataXPCInterface> {
    NSXPCConnection * _xpcConnection;
}

- (void).cxx_destruct;
- (void)addConfirmForAppClipWithHeroAppPrediction:(id)arg1 completion:(id /* block */)arg2;
- (void)addHardRejectForAppClipWithHeroAppPrediction:(id)arg1 completion:(id /* block */)arg2;
- (void)addSoftRejectForAppClipWithHeroAppPrediction:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)donateHeroAppPredictions:(id)arg1 completion:(id /* block */)arg2;
- (void)feedbackScoreForAppClipWithHeroAppPrediction:(id)arg1 completion:(id /* block */)arg2;
- (void)getCurrentHeroPoiCategoryWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)openAppClipWithHeroAppPrediction:(id)arg1 completion:(id /* block */)arg2;

@end
