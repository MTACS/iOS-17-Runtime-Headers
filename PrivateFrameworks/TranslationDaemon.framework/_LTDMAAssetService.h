
@interface _LTDMAAssetService : NSObject <_LTDAssetServiceProtocol>

+ (id)_errorFromDownloadResult:(long long)arg1;
+ (id)_errorFromQueryResult:(long long)arg1;
+ (id)_queue;
+ (long long)_returnTypeForFilter:(unsigned long long)arg1;
+ (unsigned long long)assetTypeForAssetIdentifier:(id)arg1;
+ (void)downloadAsset:(id)arg1 options:(unsigned long long)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)downloadCatalogForAssetType:(id)arg1 completion:(id /* block */)arg2;
+ (bool)isInvalidPallasCatalog:(id)arg1;
+ (id)maDownloadOptionsFrom:(unsigned long long)arg1;
+ (void)purgeAsset:(id)arg1 completion:(id /* block */)arg2;
+ (void)queryAssetType:(id)arg1 filter:(unsigned long long)arg2 completion:(id /* block */)arg3;
+ (id)queryAssetType:(id)arg1 filter:(unsigned long long)arg2 error:(id*)arg3;

@end
