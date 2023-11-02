
@interface VNRequestConfiguration : NSObject <NSCopying> {
    NSMutableDictionary * _computeStageDeviceAssignments;
    unsigned long long  _detectionLevel;
    unsigned long long  _maximumProcessingDimensionOnTheLongSide;
    unsigned long long  _memoryPoolId;
    unsigned long long  _metalContextPriority;
    unsigned long long  _modelFileBackingStore;
    bool  _preferBackgroundProcessing;
    VNProcessingDevice * _processingDevice;
    Class  _requestClass;
    unsigned long long  _resolvedRevision;
}

@property (nonatomic, copy) NSDictionary *computeStageDeviceAssignments;
@property (nonatomic) unsigned long long detectionLevel;
@property (nonatomic) unsigned long long maximumProcessingDimensionOnTheLongSide;
@property (nonatomic) unsigned long long memoryPoolId;
@property (nonatomic) unsigned long long metalContextPriority;
@property (nonatomic) unsigned long long modelFileBackingStore;
@property (nonatomic) bool preferBackgroundProcessing;
@property (nonatomic, copy) VNProcessingDevice *processingDevice;
@property (nonatomic, readonly) Class requestClass;
@property (nonatomic, readonly, copy) NSDictionary *resolvedComputeStageDeviceAssignments;
@property (nonatomic) unsigned long long resolvedRevision;

- (void).cxx_destruct;
- (id)computeDeviceForComputeStage:(id)arg1;
- (id)computeStageDeviceAssignments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)detectionLevel;
- (id)initWithRequestClass:(Class)arg1;
- (unsigned long long)maximumProcessingDimensionOnTheLongSide;
- (unsigned long long)memoryPoolId;
- (unsigned long long)metalContextPriority;
- (unsigned long long)modelFileBackingStore;
- (bool)preferBackgroundProcessing;
- (id)processingDevice;
- (Class)requestClass;
- (id)resolvedComputeStageDeviceAssignments;
- (unsigned long long)resolvedRevision;
- (void)setComputeDevice:(id)arg1 forComputeStage:(id)arg2;
- (void)setComputeStageDeviceAssignments:(id)arg1;
- (void)setDetectionLevel:(unsigned long long)arg1;
- (void)setMaximumProcessingDimensionOnTheLongSide:(unsigned long long)arg1;
- (void)setMemoryPoolId:(unsigned long long)arg1;
- (void)setMetalContextPriority:(unsigned long long)arg1;
- (void)setModelFileBackingStore:(unsigned long long)arg1;
- (void)setPreferBackgroundProcessing:(bool)arg1;
- (void)setProcessingDevice:(id)arg1;
- (void)setResolvedRevision:(unsigned long long)arg1;

@end
