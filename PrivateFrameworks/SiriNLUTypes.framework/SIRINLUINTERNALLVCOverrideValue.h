
@interface SIRINLUINTERNALLVCOverrideValue : PBCodable <NSCopying> {
    SIRINLUEXTERNALMultilingualVariant * _lvcValue;
}

@property (nonatomic, readonly) bool hasLvcValue;
@property (nonatomic, retain) SIRINLUEXTERNALMultilingualVariant *lvcValue;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLvcValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lvcValue;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLvcValue:(id)arg1;
- (void)writeTo:(id)arg1;

@end
