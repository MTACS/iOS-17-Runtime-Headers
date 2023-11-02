
@interface TRIDiffableAssetBuilder : NSObject

+ (id)buildAndSaveDiffableAssetsWithAssetIds:(id)arg1 metadataForAssetId:(id)arg2 artifactProvider:(id)arg3 options:(id)arg4 paths:(id)arg5 assetsDownloadSize:(unsigned long long*)arg6 perAssetIdCompletionBlockOnSuccess:(id /* block */)arg7 perAssetIdCompletionBlockOnError:(id /* block */)arg8 retryAfter:(id*)arg9 error:(id*)arg10;

@end
