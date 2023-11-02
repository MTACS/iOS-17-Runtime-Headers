
@interface SIRINLUEXTERNALUsoOntologyVocabulary : PBCodable <NSCopying> {
    NSMutableArray * _elementNames;
    SIRINLUEXTERNALSemVer * _usoVersion;
}

@property (nonatomic, retain) NSMutableArray *elementNames;
@property (nonatomic, readonly) bool hasUsoVersion;
@property (nonatomic, retain) SIRINLUEXTERNALSemVer *usoVersion;

+ (Class)elementNamesType;

- (void).cxx_destruct;
- (void)addElementNames:(id)arg1;
- (void)clearElementNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)elementNames;
- (id)elementNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementNamesCount;
- (bool)hasUsoVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setElementNames:(id)arg1;
- (void)setUsoVersion:(id)arg1;
- (id)usoVersion;
- (void)writeTo:(id)arg1;

@end
