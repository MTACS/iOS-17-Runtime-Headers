
@protocol PXStorySaliencyDataSource <NSObject>

@required

- (NSArray *)saliencyAreasForDisplayAsset:(id <PXDisplayAsset>)arg1;

@optional

- (NSArray *)rawSaliencyAreasForDisplayAsset:(id <PXDisplayAsset>)arg1;

@end
