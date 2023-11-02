
@interface GEORPPoiEnrichment : PBCodable <NSCopying> {
    struct { 
        unsigned int read_images : 1; 
        unsigned int read_scorecard : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _images;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORPScorecard * _scorecard;
}

@property (nonatomic, readonly) bool hasScorecard;
@property (nonatomic, retain) NSMutableArray *images;
@property (nonatomic, retain) GEORPScorecard *scorecard;

+ (Class)imageType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addImage:(id)arg1;
- (void)clearImages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasScorecard;
- (unsigned long long)hash;
- (id)imageAtIndex:(unsigned long long)arg1;
- (id)images;
- (unsigned long long)imagesCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)scorecard;
- (void)setImages:(id)arg1;
- (void)setScorecard:(id)arg1;
- (void)writeTo:(id)arg1;

@end
