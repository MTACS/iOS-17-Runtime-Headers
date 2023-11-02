
@interface VisionCoreSmartCam5InferenceNetworkDescriptor : VisionCoreEspressoNetworkDescriptor {
    NSURL * _lazySegmentationLabelsFileURL;
}

@property (nonatomic, readonly) VisionCoreLabeledConfidencesDescriptor *sceneLabelConfidencesOutput;
@property (nonatomic, readonly) VisionCoreTensorDescriptor *segmentationLabelConfidencesOutput;

+ (id)descriptorAndReturnError:(id*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)sceneLabelConfidencesOutput;
- (id)sceneLabelsFileURL;
- (id)sceneLabelsOutputBlobName;
- (id)sceneSegmentationOutputBlobName;
- (id)segmentationLabelConfidencesOutput;
- (id)segmentationLabelsFileURL;

@end
