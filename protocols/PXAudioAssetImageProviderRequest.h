
@protocol PXAudioAssetImageProviderRequest

@required

- (<PXDisplayAsset> *)asset;
- (long long)contentMode;
- (id)init;
- (PXImageRequestOptions *)options;
- (id /* block */)resultHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, UIImage *, NSDictionary *, void*, id, SEL
- (struct CGSize { double x1; double x2; })targetSize;

@end
