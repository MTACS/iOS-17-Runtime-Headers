
@interface SIRINLUINTERNALCCQROverrideTemplate : PBCodable <NSCopying> {
    SIRINLUEXTERNALRewriteMessage * _rewriteMessage;
}

@property (nonatomic, readonly) bool hasRewriteMessage;
@property (nonatomic, retain) SIRINLUEXTERNALRewriteMessage *rewriteMessage;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRewriteMessage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rewriteMessage;
- (void)setRewriteMessage:(id)arg1;
- (void)writeTo:(id)arg1;

@end
