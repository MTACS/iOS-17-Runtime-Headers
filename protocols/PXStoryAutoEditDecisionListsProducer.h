
@protocol PXStoryAutoEditDecisionListsProducer <PXStoryDiagnosticHUDContentProvider, PXTapToRadarDiagnosticProvider, NSObject>

@required

- (bool)handlesDiagnosticTextForHUDType:(long long)arg1;
- (NSProgress *)requestAutoEditDecisionListsWithOptions:(void *)arg1 songs:(void *)arg2 colorGradeCategoriesBySong:(void *)arg3 resultHandler:(void *)arg4; // needs 4 arg types, found 9: unsigned long long, <PXAudioAssetFetchResult> *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PXStoryProducerResult *, void*
- (NSProgress *)requestDefaultAutoEditDecisionListsWithColorGradeCategory:(void *)arg1 options:(void *)arg2 resultHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PXStoryProducerResult *, void*

@optional

- (PXStoryAutoEditMomentsProvider *)diagnosticsMomentsProvider;

@end
