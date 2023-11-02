
@interface MLCYOLOLossDescriptor : NSObject <NSCopying> {
    unsigned long long  _anchorBoxCount;
    NSData * _anchorBoxes;
    MLCLossDescriptor * _classesLossDescriptor;
    MLCLossDescriptor * _confidenceLossDescriptor;
    float  _maximumIOUForObjectAbsence;
    float  _minimumIOUForObjectPresence;
    int  _reductionType;
    float  _scaleClassLoss;
    float  _scaleNoObjectConfidenceLoss;
    float  _scaleObjectConfidenceLoss;
    float  _scaleSpatialPositionLoss;
    float  _scaleSpatialSizeLoss;
    bool  _shouldRescore;
    MLCLossDescriptor * _spatialPositionLossDescriptor;
    MLCLossDescriptor * _spatialSizeLossDescriptor;
}

@property (nonatomic, readonly) unsigned long long anchorBoxCount;
@property (nonatomic, readonly, copy) NSData *anchorBoxes;
@property (readonly, retain) MLCLossDescriptor *classesLossDescriptor;
@property (readonly, retain) MLCLossDescriptor *confidenceLossDescriptor;
@property (nonatomic) float maximumIOUForObjectAbsence;
@property (nonatomic) float minimumIOUForObjectPresence;
@property (nonatomic, readonly) int reductionType;
@property (nonatomic) float scaleClassLoss;
@property (nonatomic) float scaleNoObjectConfidenceLoss;
@property (nonatomic) float scaleObjectConfidenceLoss;
@property (nonatomic) float scaleSpatialPositionLoss;
@property (nonatomic) float scaleSpatialSizeLoss;
@property (nonatomic) bool shouldRescore;
@property (readonly, retain) MLCLossDescriptor *spatialPositionLossDescriptor;
@property (readonly, retain) MLCLossDescriptor *spatialSizeLossDescriptor;

+ (id)descriptorWithAnchorBoxes:(id)arg1 anchorBoxCount:(unsigned long long)arg2;

- (void).cxx_destruct;
- (unsigned long long)anchorBoxCount;
- (id)anchorBoxes;
- (id)classesLossDescriptor;
- (id)confidenceLossDescriptor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithLossDescriptorWithSpatialPositionLossType:(int)arg1 spatialSizeLossType:(int)arg2 confidenceLossType:(int)arg3 classesLossType:(int)arg4 reductionType:(int)arg5 anchorBoxCount:(unsigned long long)arg6 anchorBoxes:(id)arg7;
- (bool)isEqual:(id)arg1;
- (float)maximumIOUForObjectAbsence;
- (float)minimumIOUForObjectPresence;
- (unsigned long long)numberOfAnchorBoxes;
- (int)reductionType;
- (float)scaleClassLoss;
- (float)scaleNoObjectConfidenceLoss;
- (float)scaleObjectConfidenceLoss;
- (float)scaleSpatialPositionLoss;
- (float)scaleSpatialSizeLoss;
- (void)setMaximumIOUForObjectAbsence:(float)arg1;
- (void)setMinimumIOUForObjectPresence:(float)arg1;
- (void)setRescore:(bool)arg1;
- (void)setScaleClassLoss:(float)arg1;
- (void)setScaleNoObjectConfidenceLoss:(float)arg1;
- (void)setScaleObjectConfidenceLoss:(float)arg1;
- (void)setScaleSpatialPositionLoss:(float)arg1;
- (void)setScaleSpatialSizeLoss:(float)arg1;
- (void)setShouldRescore:(bool)arg1;
- (bool)shouldRescore;
- (id)spatialPositionLossDescriptor;
- (id)spatialSizeLossDescriptor;

@end
