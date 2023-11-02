
@interface SIRINLUEXTERNALAsrAlternative : PBCodable <NSCopying> {
    NSString * _alternative;
    SIRICOMMONFloatValue * _probability;
}

@property (nonatomic, retain) NSString *alternative;
@property (nonatomic, readonly) bool hasAlternative;
@property (nonatomic, readonly) bool hasProbability;
@property (nonatomic, retain) SIRICOMMONFloatValue *probability;

- (void).cxx_destruct;
- (id)alternative;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAlternative;
- (bool)hasProbability;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)probability;
- (bool)readFrom:(id)arg1;
- (void)setAlternative:(id)arg1;
- (void)setProbability:(id)arg1;
- (void)writeTo:(id)arg1;

@end
