
@interface SIRINLUEXTERNALSSU_INFERENCESsuInferenceResponse : PBCodable <NSCopying> {
    NSMutableArray * _parses;
}

@property (nonatomic, retain) NSMutableArray *parses;

+ (Class)parsesType;

- (void).cxx_destruct;
- (void)addParses:(id)arg1;
- (void)clearParses;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parses;
- (id)parsesAtIndex:(unsigned long long)arg1;
- (unsigned long long)parsesCount;
- (bool)readFrom:(id)arg1;
- (void)setParses:(id)arg1;
- (void)writeTo:(id)arg1;

@end
