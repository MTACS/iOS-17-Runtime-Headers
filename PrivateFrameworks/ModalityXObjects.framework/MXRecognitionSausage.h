
@interface MXRecognitionSausage : PBCodable <NSCopying> {
    NSMutableArray * _positionalTokPhraseAlts;
}

@property (nonatomic, retain) NSMutableArray *positionalTokPhraseAlts;

+ (Class)positionalTokPhraseAltType;

- (void).cxx_destruct;
- (void)addPositionalTokPhraseAlt:(id)arg1;
- (void)clearPositionalTokPhraseAlts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)positionalTokPhraseAltAtIndex:(unsigned long long)arg1;
- (id)positionalTokPhraseAlts;
- (unsigned long long)positionalTokPhraseAltsCount;
- (bool)readFrom:(id)arg1;
- (void)setPositionalTokPhraseAlts:(id)arg1;
- (void)writeTo:(id)arg1;

@end
