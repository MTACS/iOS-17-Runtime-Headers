
@interface SIRINLUEXTERNALUserStatedTask : PBCodable <NSCopying> {
    SIRINLUEXTERNALUsoGraph * _task;
}

@property (nonatomic, readonly) bool hasTask;
@property (nonatomic, retain) SIRINLUEXTERNALUsoGraph *task;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTask;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTask:(id)arg1;
- (id)task;
- (void)writeTo:(id)arg1;

@end
