
@interface PFLTask : PBCodable <NSCopying> {
    NSString * _dataSourceId;
    struct { 
        unsigned int modelVersion : 1; 
        unsigned int updatableWeightsCount : 1; 
    }  _has;
    PFLTaskLocalPrivacyParams * _localPrivacyParams;
    PFLTaskLocalTrainingParams * _localTrainingParams;
    NSString * _modelName;
    long long  _modelVersion;
    NSString * _taskId;
    long long  _updatableWeightsCount;
}

@property (nonatomic, retain) NSString *dataSourceId;
@property (nonatomic, readonly) bool hasDataSourceId;
@property (nonatomic, readonly) bool hasLocalPrivacyParams;
@property (nonatomic, readonly) bool hasLocalTrainingParams;
@property (nonatomic, readonly) bool hasModelName;
@property (nonatomic) bool hasModelVersion;
@property (nonatomic, readonly) bool hasTaskId;
@property (nonatomic) bool hasUpdatableWeightsCount;
@property (nonatomic, retain) PFLTaskLocalPrivacyParams *localPrivacyParams;
@property (nonatomic, retain) PFLTaskLocalTrainingParams *localTrainingParams;
@property (nonatomic, retain) NSString *modelName;
@property (nonatomic) long long modelVersion;
@property (nonatomic, retain) NSString *taskId;
@property (nonatomic) long long updatableWeightsCount;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSourceId;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDataSourceId;
- (bool)hasLocalPrivacyParams;
- (bool)hasLocalTrainingParams;
- (bool)hasModelName;
- (bool)hasModelVersion;
- (bool)hasTaskId;
- (bool)hasUpdatableWeightsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localPrivacyParams;
- (id)localTrainingParams;
- (void)mergeFrom:(id)arg1;
- (id)modelName;
- (long long)modelVersion;
- (bool)readFrom:(id)arg1;
- (void)setDataSourceId:(id)arg1;
- (void)setHasModelVersion:(bool)arg1;
- (void)setHasUpdatableWeightsCount:(bool)arg1;
- (void)setLocalPrivacyParams:(id)arg1;
- (void)setLocalTrainingParams:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setModelVersion:(long long)arg1;
- (void)setTaskId:(id)arg1;
- (void)setUpdatableWeightsCount:(long long)arg1;
- (id)taskId;
- (long long)updatableWeightsCount;
- (void)writeTo:(id)arg1;

@end
