
@interface PXSystemMediaAnalyzer : NSObject <PXMediaAnalyzer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)requestAnalysisForAssets:(id)arg1 options:(unsigned long long)arg2 resultHandler:(id /* block */)arg3;
- (id)requestMatchedTimeRangesForAsset:(id)arg1 personLocalIdentifiers:(id)arg2 sceneIdentifiers:(id)arg3 audioIdentifiers:(id)arg4 humanActionIdentifiers:(id)arg5 resultHandler:(id /* block */)arg6;

@end
