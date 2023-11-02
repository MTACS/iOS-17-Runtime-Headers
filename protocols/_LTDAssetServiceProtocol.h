
@protocol _LTDAssetServiceProtocol

@required

+ (unsigned long long)assetTypeForAssetIdentifier:(NSString *)arg1;
+ (void)downloadAsset:(void *)arg1 options:(void *)arg2 progress:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 14: _LTDAssetModel *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _LTDAssetModel *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
+ (void)purgeAsset:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: _LTDAssetModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _LTDAssetModel *, NSError *, void*

@optional

+ (void)downloadCatalogForAssetType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
+ (void)queryAssetType:(void *)arg1 filter:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
+ (NSArray *)queryAssetType:(NSString *)arg1 filter:(unsigned long long)arg2 error:(id*)arg3;

@end
