
@interface PFLUploadDataPointRequest : PBRequest <CKCodeOperationMessageMutation, NSCopying> {
    double  _accuracy;
    long long  _flattenedPrivatizedWeightCount;
    CKCodeRecordTransport * _flattenedPrivatizedWeightData;
    NSString * _flattenedPrivatizedWeightType;
    struct { 
        unsigned int accuracy : 1; 
        unsigned int flattenedPrivatizedWeightCount : 1; 
        unsigned int loss : 1; 
        unsigned int modelVersion : 1; 
    }  _has;
    double  _loss;
    long long  _modelVersion;
    NSString * _taskId;
}

@property (nonatomic) double accuracy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long flattenedPrivatizedWeightCount;
@property (nonatomic, retain) CKCodeRecordTransport *flattenedPrivatizedWeightData;
@property (nonatomic, retain) NSString *flattenedPrivatizedWeightType;
@property (nonatomic) bool hasAccuracy;
@property (nonatomic) bool hasFlattenedPrivatizedWeightCount;
@property (nonatomic, readonly) bool hasFlattenedPrivatizedWeightData;
@property (nonatomic, readonly) bool hasFlattenedPrivatizedWeightType;
@property (nonatomic) bool hasLoss;
@property (nonatomic) bool hasModelVersion;
@property (nonatomic, readonly) bool hasTaskId;
@property (readonly) unsigned long long hash;
@property (nonatomic) double loss;
@property (nonatomic) long long modelVersion;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *taskId;

- (void).cxx_destruct;
- (double)accuracy;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)extractRecordTransports;
- (long long)flattenedPrivatizedWeightCount;
- (id)flattenedPrivatizedWeightData;
- (id)flattenedPrivatizedWeightType;
- (bool)hasAccuracy;
- (bool)hasFlattenedPrivatizedWeightCount;
- (bool)hasFlattenedPrivatizedWeightData;
- (bool)hasFlattenedPrivatizedWeightType;
- (bool)hasLoss;
- (bool)hasModelVersion;
- (bool)hasTaskId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)loss;
- (void)mergeFrom:(id)arg1;
- (long long)modelVersion;
- (bool)readFrom:(id)arg1;
- (void)setAccuracy:(double)arg1;
- (void)setFlattenedPrivatizedWeightCount:(long long)arg1;
- (void)setFlattenedPrivatizedWeightData:(id)arg1;
- (void)setFlattenedPrivatizedWeightType:(id)arg1;
- (void)setHasAccuracy:(bool)arg1;
- (void)setHasFlattenedPrivatizedWeightCount:(bool)arg1;
- (void)setHasLoss:(bool)arg1;
- (void)setHasModelVersion:(bool)arg1;
- (void)setLoss:(double)arg1;
- (void)setModelVersion:(long long)arg1;
- (void)setTaskId:(id)arg1;
- (void)substituteRecordTransports:(id)arg1;
- (id)taskId;
- (void)writeTo:(id)arg1;

@end
