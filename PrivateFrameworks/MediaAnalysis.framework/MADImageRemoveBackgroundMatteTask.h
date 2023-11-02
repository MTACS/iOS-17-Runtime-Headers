
@interface MADImageRemoveBackgroundMatteTask : MADImageRemoveBackgroundTask <VCPMADServiceImageProcessingSubtaskProtocol> {
    VCPMADServiceImageAsset * _imageAsset;
    MADRemoveBackgroundMatteRequest * _request;
}

+ (id)dependencies;
+ (id)taskWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;

- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;
- (int)run;

@end
