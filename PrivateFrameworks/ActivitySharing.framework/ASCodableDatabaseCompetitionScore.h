
@interface ASCodableDatabaseCompetitionScore : PBCodable <NSCopying> {
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _scores;
}

@property (nonatomic, readonly) long long*scores;
@property (nonatomic, readonly) unsigned long long scoresCount;

- (void)addScores:(long long)arg1;
- (void)clearScores;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long*)scores;
- (long long)scoresAtIndex:(unsigned long long)arg1;
- (unsigned long long)scoresCount;
- (void)setScores:(long long*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
