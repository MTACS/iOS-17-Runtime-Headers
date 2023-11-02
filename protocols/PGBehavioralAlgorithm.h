
@protocol PGBehavioralAlgorithm

@required

- (NSDictionary *)dataToPersist;
- (void)preprocessWithProgressBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, bool*, void*
- (NSDictionary *)semanticScoreByAssetUUIDForAssets:(NSArray *)arg1;
- (float)semanticScoreForAsset:(PHAsset *)arg1;

@end
