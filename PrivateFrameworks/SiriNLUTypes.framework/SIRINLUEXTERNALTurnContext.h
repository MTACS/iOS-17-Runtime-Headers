
@interface SIRINLUEXTERNALTurnContext : PBCodable <NSCopying> {
    SIRINLUEXTERNALLegacyNLContext * _legacyNlContext;
    SIRINLUEXTERNALNLContext * _nlContext;
}

@property (nonatomic, readonly) bool hasLegacyNlContext;
@property (nonatomic, readonly) bool hasNlContext;
@property (nonatomic, retain) SIRINLUEXTERNALLegacyNLContext *legacyNlContext;
@property (nonatomic, retain) SIRINLUEXTERNALNLContext *nlContext;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLegacyNlContext;
- (bool)hasNlContext;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)legacyNlContext;
- (void)mergeFrom:(id)arg1;
- (id)nlContext;
- (bool)readFrom:(id)arg1;
- (void)setLegacyNlContext:(id)arg1;
- (void)setNlContext:(id)arg1;
- (void)writeTo:(id)arg1;

@end
