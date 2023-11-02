
@protocol PUPosterOverrideConfiguration <NSObject>

@required

- (bool)applySmartCrop;
- (NSString *)assetIdentifier;
- (NSURL *)assetURL;
- (bool)includeBackfillLayers;
- (bool)includeInactiveLayers;

@end
