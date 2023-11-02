
@interface SIRINLUINTERNALOverrideValue : PBCodable <NSCopying> {
    SIRINLUINTERNALCCQROverrideTemplate * _ccqrOverrideTemplate;
    SIRINLUINTERNALLVCOverrideValue * _lvcOverrideValue;
    SIRINLUEXTERNALUserParse * _userParse;
}

@property (nonatomic, retain) SIRINLUINTERNALCCQROverrideTemplate *ccqrOverrideTemplate;
@property (nonatomic, readonly) bool hasCcqrOverrideTemplate;
@property (nonatomic, readonly) bool hasLvcOverrideValue;
@property (nonatomic, readonly) bool hasUserParse;
@property (nonatomic, retain) SIRINLUINTERNALLVCOverrideValue *lvcOverrideValue;
@property (nonatomic, retain) SIRINLUEXTERNALUserParse *userParse;

- (void).cxx_destruct;
- (id)ccqrOverrideTemplate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCcqrOverrideTemplate;
- (bool)hasLvcOverrideValue;
- (bool)hasUserParse;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lvcOverrideValue;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCcqrOverrideTemplate:(id)arg1;
- (void)setLvcOverrideValue:(id)arg1;
- (void)setUserParse:(id)arg1;
- (id)userParse;
- (void)writeTo:(id)arg1;

@end
