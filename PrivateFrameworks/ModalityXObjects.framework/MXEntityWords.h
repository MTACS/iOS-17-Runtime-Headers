
@interface MXEntityWords : PBCodable <NSCopying> {
    NSMutableArray * _words;
}

@property (nonatomic, retain) NSMutableArray *words;

+ (Class)wordsType;

- (void).cxx_destruct;
- (void)addWords:(id)arg1;
- (void)clearWords;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setWords:(id)arg1;
- (id)words;
- (id)wordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)wordsCount;
- (void)writeTo:(id)arg1;

@end
