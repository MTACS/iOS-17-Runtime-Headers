
@interface DRSProtoTaskingConfigCompletion : PBCodable <CKCodeOperationMessageMutation, NSCopying> {
    float  _activeDuration;
    NSString * _completionDescription;
    NSString * _completionType;
    struct { 
        unsigned int activeDuration : 1; 
    }  _has;
    DRSProtoTaskingConfigMetadata * _taskingConfigMetadata;
}

@property (nonatomic) float activeDuration;
@property (nonatomic, retain) NSString *completionDescription;
@property (nonatomic, retain) NSString *completionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasActiveDuration;
@property (nonatomic, readonly) bool hasCompletionDescription;
@property (nonatomic, readonly) bool hasCompletionType;
@property (nonatomic, readonly) bool hasTaskingConfigMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) DRSProtoTaskingConfigMetadata *taskingConfigMetadata;

- (void).cxx_destruct;
- (float)activeDuration;
- (id)completionDescription;
- (id)completionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActiveDuration;
- (bool)hasCompletionDescription;
- (bool)hasCompletionType;
- (bool)hasTaskingConfigMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActiveDuration:(float)arg1;
- (void)setCompletionDescription:(id)arg1;
- (void)setCompletionType:(id)arg1;
- (void)setHasActiveDuration:(bool)arg1;
- (void)setTaskingConfigMetadata:(id)arg1;
- (id)taskingConfigMetadata;
- (void)writeTo:(id)arg1;

@end
