
@protocol PXMediaAnalyzer <NSObject>

@required

- (NSProgress *)requestAnalysisForAssets:(void *)arg1 options:(void *)arg2 resultHandler:(void *)arg3; // needs 3 arg types, found 8: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@optional

- (NSProgress *)requestMatchedTimeRangesForAsset:(void *)arg1 personLocalIdentifiers:(void *)arg2 sceneIdentifiers:(void *)arg3 audioIdentifiers:(void *)arg4 humanActionIdentifiers:(void *)arg5 resultHandler:(void *)arg6; // needs 6 arg types, found 11: PHAsset *, NSArray *, NSArray *, NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
