
@interface SIRINLUEXTERNALSystemPrompted : PBCodable <NSCopying> {
    SIRINLUEXTERNALUsoGraph * _target;
    SIRINLUEXTERNALUUID * _taskId;
}

@property (nonatomic, readonly) bool hasTarget;
@property (nonatomic, readonly) bool hasTaskId;
@property (nonatomic, retain) SIRINLUEXTERNALUsoGraph *target;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *taskId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTarget;
- (bool)hasTaskId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setTaskId:(id)arg1;
- (id)target;
- (id)taskId;
- (void)writeTo:(id)arg1;

@end
