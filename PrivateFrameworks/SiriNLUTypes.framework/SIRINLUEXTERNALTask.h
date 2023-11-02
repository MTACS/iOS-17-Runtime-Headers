
@interface SIRINLUEXTERNALTask : PBCodable <NSCopying> {
    SIRICOMMONDoubleValue * _score;
    SIRINLUEXTERNALUsoGraph * _task;
    SIRINLUEXTERNALUUID * _taskId;
}

@property (nonatomic, readonly) bool hasScore;
@property (nonatomic, readonly) bool hasTask;
@property (nonatomic, readonly) bool hasTaskId;
@property (nonatomic, retain) SIRICOMMONDoubleValue *score;
@property (nonatomic, retain) SIRINLUEXTERNALUsoGraph *task;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *taskId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasScore;
- (bool)hasTask;
- (bool)hasTaskId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)score;
- (void)setScore:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setTaskId:(id)arg1;
- (id)task;
- (id)taskId;
- (void)writeTo:(id)arg1;

@end
