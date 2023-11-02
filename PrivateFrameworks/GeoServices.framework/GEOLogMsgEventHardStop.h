
@interface GEOLogMsgEventHardStop : PBCodable <NSCopying> {
    NSMutableArray * _cities;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _digits;
    struct { 
        unsigned int has_score : 1; 
        unsigned int read_digits : 1; 
        unsigned int read_cities : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    double  _score;
}

@property (nonatomic, retain) NSMutableArray *cities;
@property (nonatomic, readonly) unsigned int*digits;
@property (nonatomic, readonly) unsigned long long digitsCount;
@property (nonatomic) bool hasScore;
@property (nonatomic) double score;

+ (Class)citiesType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addCities:(id)arg1;
- (void)addDigits:(unsigned int)arg1;
- (id)cities;
- (id)citiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)citiesCount;
- (void)clearCities;
- (void)clearDigits;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int*)digits;
- (unsigned int)digitsAtIndex:(unsigned long long)arg1;
- (unsigned long long)digitsCount;
- (bool)hasScore;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (double)score;
- (void)setCities:(id)arg1;
- (void)setDigits:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setHasScore:(bool)arg1;
- (void)setScore:(double)arg1;
- (void)writeTo:(id)arg1;

@end
