
@interface LIGHTHOUSE_BITACORA_PROTOBMLTIdentifiers : PBCodable <NSCopying> {
    NSString * _trialDeploymentID;
    NSString * _trialTaskID;
}

@property (nonatomic, readonly) bool hasTrialDeploymentID;
@property (nonatomic, readonly) bool hasTrialTaskID;
@property (nonatomic, retain) NSString *trialDeploymentID;
@property (nonatomic, retain) NSString *trialTaskID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTrialDeploymentID;
- (bool)hasTrialTaskID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTrialDeploymentID:(id)arg1;
- (void)setTrialTaskID:(id)arg1;
- (id)trialDeploymentID;
- (id)trialTaskID;
- (void)writeTo:(id)arg1;

@end
