
@interface PeoplePredictionDataTrialIdentifier : PBCodable <NSCopying> {
    NSString * _deployment;
    NSString * _task;
    NSString * _treatment;
}

@property (nonatomic, retain) NSString *deployment;
@property (nonatomic, readonly) bool hasDeployment;
@property (nonatomic, readonly) bool hasTask;
@property (nonatomic, readonly) bool hasTreatment;
@property (nonatomic, retain) NSString *task;
@property (nonatomic, retain) NSString *treatment;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deployment;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDeployment;
- (bool)hasTask;
- (bool)hasTreatment;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeployment:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setTreatment:(id)arg1;
- (id)task;
- (id)treatment;
- (void)writeTo:(id)arg1;

@end
