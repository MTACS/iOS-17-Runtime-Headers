
@protocol PUBrowsingSessionImageWellThumbnailProvider

@required

- (void)cancelThumbnailRequest:(long long)arg1;
- (long long)requestImageAndUUIDForStartingAssetFillingTargetSize:(void *)arg1 resultHandler:(void *)arg2; // needs 2 arg types, found 10: struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSString *, NSError *, long long, void*
- (long long)requestImageForStartingAssetFillingTargetSize:(void *)arg1 resultHandler:(void *)arg2; // needs 2 arg types, found 9: struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSError *, long long, void*

@end
