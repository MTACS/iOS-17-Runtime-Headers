
@interface ATXPBSpotlightSuggestionLayout : PBCodable <NSCopying> {
    NSMutableArray * _collections;
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _scores;
    NSString * _uuidString;
}

@property (nonatomic, retain) NSMutableArray *collections;
@property (nonatomic, readonly) bool hasUuidString;
@property (nonatomic, readonly) double*scores;
@property (nonatomic, readonly) unsigned long long scoresCount;
@property (nonatomic, retain) NSString *uuidString;

+ (Class)collectionsType;

- (void).cxx_destruct;
- (void)addCollections:(id)arg1;
- (void)addScores:(double)arg1;
- (void)clearCollections;
- (void)clearScores;
- (id)collections;
- (id)collectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)collectionsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasUuidString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double*)scores;
- (double)scoresAtIndex:(unsigned long long)arg1;
- (unsigned long long)scoresCount;
- (void)setCollections:(id)arg1;
- (void)setScores:(double*)arg1 count:(unsigned long long)arg2;
- (void)setUuidString:(id)arg1;
- (id)uuidString;
- (void)writeTo:(id)arg1;

@end
