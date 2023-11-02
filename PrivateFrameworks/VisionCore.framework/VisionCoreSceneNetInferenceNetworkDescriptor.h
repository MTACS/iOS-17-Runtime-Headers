
@interface VisionCoreSceneNetInferenceNetworkDescriptor : VisionCoreEspressoNetworkDescriptor {
    VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor * _VN5kJNH3eYuyaLxNpZr5Z7ziCustomClassifierDescriptor;
    VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor * _VNVYvzEtX1JlUdu8xx5qhDICustomClassifierDescriptor;
    VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor * _VNdGg5skzXHSAENO6T3enHECustomClassifierDescriptor;
    NSString * _aestheticsAttributesBlobName;
    NSString * _aestheticsLabelsFileName;
    NSString * _aestheticsScoresBlobName;
    NSURL * _aneSpecificModelURL;
    VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor * _cityNatureCustomClassifierDescriptor;
    NSString * _entityNetLabelsBlobName;
    NSString * _entityNetLabelsFileName;
    NSString * _entityNetOperatingPointsFileName;
    NSString * _fingerprintsHasherFileName;
    NSString * _fingerprintsOutputBlobName;
    NSString * _inputImageBlobName;
    VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor * _junkHierarchicalCustomClassifierDescriptor;
    VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor * _junkLeafCustomClassifierDescriptor;
    unsigned long long  _model;
    NSString * _objectDetectorCoordinatesOutputBlobName;
    NSString * _objectDetectorLabelsFileName;
    NSString * _objectDetectorOutputBlobBaseName;
    NSString * _objectDetectorScoresOutputBlobName;
    NSString * _pca256FileName;
    VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor * _potentialLandmarksCustomClassifierDescriptor;
    NSString * _saliencyAHeatMapBlobName;
    NSString * _saliencyOHeatMapBlobName;
    NSString * _sceneClassificationLabelsBlobName;
    NSString * _sceneLabelRelationshipsFileName;
    NSString * _sceneLabelsFileName;
    NSString * _sceneOperatingPointsFileName;
    NSString * _sceneRepresentationBlobName;
    bool  _shouldInitializeAdditionalModelHeads;
    NSString * _sliderNetBlobNamePrefix;
}

@property (nonatomic, readonly) VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor *VN5kJNH3eYuyaLxNpZr5Z7ziCustomClassifierDescriptor;
@property (readonly) VNDisallowedList *VNPublicClassificationDisallowedList;
@property (nonatomic, readonly) VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor *VNVYvzEtX1JlUdu8xx5qhDICustomClassifierDescriptor;
@property (nonatomic, readonly) VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor *VNdGg5skzXHSAENO6T3enHECustomClassifierDescriptor;
@property (nonatomic, readonly, copy) NSString *aestheticsAttributesBlobName;
@property (nonatomic, readonly) NSURL *aestheticsLabelsFileURL;
@property (nonatomic, readonly, copy) NSString *aestheticsScoresBlobName;
@property (nonatomic, readonly, copy) NSString *analyzerName;
@property (nonatomic, readonly) VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor *cityNatureCustomClassifierDescriptor;
@property (nonatomic, readonly, copy) NSString *entityNetLabelsBlobName;
@property (nonatomic, readonly) NSURL *entityNetLabelsFileURL;
@property (nonatomic, readonly) NSURL *entityNetOperatingPointsFileURL;
@property (nonatomic, readonly) NSURL *fingerprintsHasherFileURL;
@property (nonatomic, readonly, copy) NSString *fingerprintsOutputBlobName;
@property (nonatomic, readonly, copy) NSString *inputImageBlobName;
@property (nonatomic, readonly) VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor *junkHierarchicalCustomClassifierDescriptor;
@property (nonatomic, readonly) VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor *junkLeafCustomClassifierDescriptor;
@property (nonatomic, readonly) unsigned long long model;
@property (nonatomic, readonly, copy) NSString *objectDetectorCoordinatesOutputBlobName;
@property (nonatomic, readonly) NSURL *objectDetectorLabelsFileURL;
@property (nonatomic, readonly, copy) NSString *objectDetectorOutputBlobBaseName;
@property (nonatomic, readonly, copy) NSString *objectDetectorScoresOutputBlobName;
@property (nonatomic, readonly) NSURL *pca256FileURL;
@property (nonatomic, readonly) VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor *potentialLandmarksCustomClassifierDescriptor;
@property (nonatomic, readonly, copy) NSString *saliencyAHeatMapBlobName;
@property (nonatomic, readonly, copy) NSString *saliencyOHeatMapBlobName;
@property (nonatomic, readonly, copy) NSString *sceneClassificationLabelsBlobName;
@property (nonatomic, readonly) VisionCoreTensorDescriptor *sceneLabelConfidencesOutput;
@property (nonatomic, readonly) NSURL *sceneLabelRelationshipsFileURL;
@property (nonatomic, readonly) NSURL *sceneLabelsFileURL;
@property (nonatomic, readonly) NSURL *sceneOperatingPointsFileURL;
@property (nonatomic, readonly, copy) NSString *sceneRepresentationBlobName;
@property (nonatomic, readonly) VisionCoreTensorDescriptor *sceneprintOutput;
@property (nonatomic, readonly) bool shouldInitializeAdditionalModelHeads;
@property (nonatomic, readonly, copy) NSString *sliderNetBlobNamePrefix;

// Image: /System/Library/PrivateFrameworks/VisionCore.framework/VisionCore

+ (bool)_getAnalyzerName:(id*)arg1 ANESpecificAnalyzerName:(id*)arg2 specifier:(id*)arg3 forModel:(unsigned long long)arg4 objDetNet:(bool)arg5 sliderNet:(bool)arg6 error:(id*)arg7;
+ (id)descriptorForModel:(unsigned long long)arg1 requireObjDetNet:(bool)arg2 requireSliderNet:(bool)arg3 error:(id*)arg4;
+ (id)sceneNetObjDetNetSliderNetV3AndReturnError:(id*)arg1;
+ (id)sceneNetV3AndReturnError:(id*)arg1;
+ (id)sceneNetV5AndReturnError:(id*)arg1;
+ (id)sceneNetV5CameraAndReturnError:(id*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ANESpecificURL;
- (id)VN5kJNH3eYuyaLxNpZr5Z7ziCustomClassifierDescriptor;
- (id)VNVYvzEtX1JlUdu8xx5qhDICustomClassifierDescriptor;
- (id)VNdGg5skzXHSAENO6T3enHECustomClassifierDescriptor;
- (id)_newCustomClassifierDescriptorWithModelName:(id)arg1 labelsFileName:(id)arg2 inputBlobName:(id)arg3 outputBlobName:(id)arg4 error:(id*)arg5;
- (id)aestheticsAttributesBlobName;
- (id)aestheticsLabelsFileURL;
- (id)aestheticsScoresBlobName;
- (id)analyzerName;
- (id)cityNatureCustomClassifierDescriptor;
- (void)encodeWithCoder:(id)arg1;
- (id)entityNetLabelsBlobName;
- (id)entityNetLabelsFileURL;
- (id)entityNetOperatingPointsFileURL;
- (id)fingerprintsHasherFileURL;
- (id)fingerprintsOutputBlobName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)inputImageBlobName;
- (bool)isEqual:(id)arg1;
- (id)junkHierarchicalCustomClassifierDescriptor;
- (id)junkLeafCustomClassifierDescriptor;
- (unsigned long long)model;
- (id)objectDetectorCoordinatesOutputBlobName;
- (id)objectDetectorLabelsFileURL;
- (id)objectDetectorOutputBlobBaseName;
- (id)objectDetectorScoresOutputBlobName;
- (id)pca256FileURL;
- (id)potentialLandmarksCustomClassifierDescriptor;
- (id)saliencyAHeatMapBlobName;
- (id)saliencyOHeatMapBlobName;
- (id)sceneClassificationLabelsBlobName;
- (id)sceneLabelConfidencesOutput;
- (id)sceneLabelRelationshipsFileURL;
- (id)sceneLabelsFileURL;
- (id)sceneOperatingPointsFileURL;
- (id)sceneRepresentationBlobName;
- (id)sceneprintOutput;
- (bool)shouldInitializeAdditionalModelHeads;
- (id)sliderNetBlobNamePrefix;

// Image: /System/Library/Frameworks/Vision.framework/Vision

- (id)VNPublicClassificationDisallowedList;
- (id)VNSceneprintFromData:(id)arg1 labelsAndConfidences:(id)arg2 originatingRequestSpecifier:(id)arg3 error:(id*)arg4;
- (id)VNSceneprintFromData:(id)arg1 originatingRequestSpecifier:(id)arg2 error:(id*)arg3;
- (id)VNSceneprintFromOutputObjects:(id)arg1 originatingRequestSpecifier:(id)arg2 error:(id*)arg3;

@end
