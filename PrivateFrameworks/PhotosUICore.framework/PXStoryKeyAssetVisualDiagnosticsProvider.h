
@interface PXStoryKeyAssetVisualDiagnosticsProvider : NSObject <PXVisualDiagnosticsProvider> {
    PXStoryVisualDiagnosticsProviderHelper * _helper;
    PXStoryModel * _model;
}

@property (nonatomic, readonly) PXStoryVisualDiagnosticsProviderHelper *helper;
@property (nonatomic, readonly) PXStoryModel *model;

- (void).cxx_destruct;
- (void)_requestPotentialKeyAssetsWithResultHandler:(id /* block */)arg1;
- (void)_requestThumbnailTimelineWithKeyAsset:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)addVisualDiagnosticsToContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)helper;
- (id)init;
- (id)initWithModel:(id)arg1;
- (id)model;

@end
