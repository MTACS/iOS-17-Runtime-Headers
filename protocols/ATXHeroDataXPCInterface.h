
@protocol ATXHeroDataXPCInterface

@required

- (void)addConfirmForAppClipWithHeroAppPrediction:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ATXHeroData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addHardRejectForAppClipWithHeroAppPrediction:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ATXHeroData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addSoftRejectForAppClipWithHeroAppPrediction:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ATXHeroData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)donateHeroAppPredictions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)feedbackScoreForAppClipWithHeroAppPrediction:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ATXHeroData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, double, void*
- (void)getCurrentHeroPoiCategoryWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)openAppClipWithHeroAppPrediction:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ATXHeroData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
