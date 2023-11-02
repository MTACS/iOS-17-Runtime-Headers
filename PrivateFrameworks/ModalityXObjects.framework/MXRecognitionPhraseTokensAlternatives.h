
@interface MXRecognitionPhraseTokensAlternatives : PBCodable <NSCopying> {
    struct { 
        unsigned int hasUnsuggestedAlternatives : 1; 
    }  _has;
    bool  _hasUnsuggestedAlternatives;
    NSMutableArray * _tokPhrases;
}

@property (nonatomic) bool hasHasUnsuggestedAlternatives;
@property (nonatomic) bool hasUnsuggestedAlternatives;
@property (nonatomic, retain) NSMutableArray *tokPhrases;

+ (Class)tokPhrasesType;

- (void).cxx_destruct;
- (void)addTokPhrases:(id)arg1;
- (void)clearTokPhrases;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHasUnsuggestedAlternatives;
- (bool)hasUnsuggestedAlternatives;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHasUnsuggestedAlternatives:(bool)arg1;
- (void)setHasUnsuggestedAlternatives:(bool)arg1;
- (void)setTokPhrases:(id)arg1;
- (id)tokPhrases;
- (id)tokPhrasesAtIndex:(unsigned long long)arg1;
- (unsigned long long)tokPhrasesCount;
- (void)writeTo:(id)arg1;

@end
