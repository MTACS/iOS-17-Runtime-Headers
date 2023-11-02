
@interface PLQuery : PBCodable <NSCopying> {
    int  _conjunction;
    PLQuery * _first;
    struct { 
        unsigned int conjunction : 1; 
    }  _has;
    PLQuery * _second;
    NSMutableArray * _singleQueries;
}

@property (nonatomic) int conjunction;
@property (nonatomic, retain) PLQuery *first;
@property (nonatomic) bool hasConjunction;
@property (nonatomic, readonly) bool hasFirst;
@property (nonatomic, readonly) bool hasSecond;
@property (nonatomic, retain) PLQuery *second;
@property (nonatomic, retain) NSMutableArray *singleQueries;

+ (Class)singleQueriesType;

- (void).cxx_destruct;
- (void)addSingleQueries:(id)arg1;
- (void)clearSingleQueries;
- (int)conjunction;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)first;
- (bool)hasConjunction;
- (bool)hasFirst;
- (bool)hasSecond;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)logDescription;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)second;
- (void)setConjunction:(int)arg1;
- (void)setFirst:(id)arg1;
- (void)setHasConjunction:(bool)arg1;
- (void)setSecond:(id)arg1;
- (void)setSingleQueries:(id)arg1;
- (id)singleQueries;
- (id)singleQueriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)singleQueriesCount;
- (void)writeTo:(id)arg1;

@end
