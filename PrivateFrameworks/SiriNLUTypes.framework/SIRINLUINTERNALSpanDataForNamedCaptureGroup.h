
@interface SIRINLUINTERNALSpanDataForNamedCaptureGroup : PBCodable <NSCopying> {
    struct { 
        unsigned int targetNodeIdx : 1; 
        unsigned int targetUdaIdx : 1; 
    }  _has;
    NSString * _label;
    int  _targetNodeIdx;
    int  _targetUdaIdx;
}

@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasTargetNodeIdx;
@property (nonatomic) bool hasTargetUdaIdx;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) int targetNodeIdx;
@property (nonatomic) int targetUdaIdx;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLabel;
- (bool)hasTargetNodeIdx;
- (bool)hasTargetUdaIdx;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTargetNodeIdx:(bool)arg1;
- (void)setHasTargetUdaIdx:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setTargetNodeIdx:(int)arg1;
- (void)setTargetUdaIdx:(int)arg1;
- (int)targetNodeIdx;
- (int)targetUdaIdx;
- (void)writeTo:(id)arg1;

@end
