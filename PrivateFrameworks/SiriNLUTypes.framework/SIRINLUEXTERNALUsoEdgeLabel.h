
@interface SIRINLUEXTERNALUsoEdgeLabel : PBCodable <NSCopying> {
    SIRINLUEXTERNALUsoLabel * _baseEdgeLabel;
    unsigned int  _enumeration;
    struct { 
        unsigned int enumeration : 1; 
        unsigned int usoElementId : 1; 
    }  _has;
    unsigned int  _usoElementId;
}

@property (nonatomic, retain) SIRINLUEXTERNALUsoLabel *baseEdgeLabel;
@property (nonatomic) unsigned int enumeration;
@property (nonatomic, readonly) bool hasBaseEdgeLabel;
@property (nonatomic) bool hasEnumeration;
@property (nonatomic) bool hasUsoElementId;
@property (nonatomic) unsigned int usoElementId;

- (void).cxx_destruct;
- (id)baseEdgeLabel;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)enumeration;
- (bool)hasBaseEdgeLabel;
- (bool)hasEnumeration;
- (bool)hasUsoElementId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBaseEdgeLabel:(id)arg1;
- (void)setEnumeration:(unsigned int)arg1;
- (void)setHasEnumeration:(bool)arg1;
- (void)setHasUsoElementId:(bool)arg1;
- (void)setUsoElementId:(unsigned int)arg1;
- (unsigned int)usoElementId;
- (void)writeTo:(id)arg1;

@end
