
@interface SIRINLUINTERNALAdjacentSpans : PBCodable <NSCopying> {
    NSString * _captureGroupName;
    NSMutableArray * _spans;
}

@property (nonatomic, retain) NSString *captureGroupName;
@property (nonatomic, readonly) bool hasCaptureGroupName;
@property (nonatomic, retain) NSMutableArray *spans;

+ (Class)spansType;

- (void).cxx_destruct;
- (void)addSpans:(id)arg1;
- (id)captureGroupName;
- (void)clearSpans;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCaptureGroupName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCaptureGroupName:(id)arg1;
- (void)setSpans:(id)arg1;
- (id)spans;
- (id)spansAtIndex:(unsigned long long)arg1;
- (unsigned long long)spansCount;
- (void)writeTo:(id)arg1;

@end
