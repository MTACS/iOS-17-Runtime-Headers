
@interface SIRINLUINTERNALMDSUaaPParseOverride : PBCodable <NSCopying> {
    SIRINLUINTERNALParseOverride * _parseOverride;
}

@property (nonatomic, readonly) bool hasParseOverride;
@property (nonatomic, retain) SIRINLUINTERNALParseOverride *parseOverride;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasParseOverride;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parseOverride;
- (bool)readFrom:(id)arg1;
- (void)setParseOverride:(id)arg1;
- (void)writeTo:(id)arg1;

@end
