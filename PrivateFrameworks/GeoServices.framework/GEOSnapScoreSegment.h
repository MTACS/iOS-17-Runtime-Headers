
@interface GEOSnapScoreSegment : PBCodable <NSCopying> {
    NSMutableArray * _attributes;
    NSMutableArray * _categoryScores;
    struct { 
        unsigned int has_geoId : 1; 
        unsigned int has_overallScore : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_attributes : 1; 
        unsigned int read_categoryScores : 1; 
        unsigned int read_pointOnLine : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned long long  _geoId;
    float  _overallScore;
    GEOLatLng * _pointOnLine;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *attributes;
@property (nonatomic, retain) NSMutableArray *categoryScores;
@property (nonatomic) unsigned long long geoId;
@property (nonatomic) bool hasGeoId;
@property (nonatomic) bool hasOverallScore;
@property (nonatomic, readonly) bool hasPointOnLine;
@property (nonatomic) float overallScore;
@property (nonatomic, retain) GEOLatLng *pointOnLine;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)attributeType;
+ (Class)categoryScoreType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addAttribute:(id)arg1;
- (void)addCategoryScore:(id)arg1;
- (id)attributeAtIndex:(unsigned long long)arg1;
- (id)attributes;
- (unsigned long long)attributesCount;
- (id)categoryScoreAtIndex:(unsigned long long)arg1;
- (id)categoryScores;
- (unsigned long long)categoryScoresCount;
- (void)clearAttributes;
- (void)clearCategoryScores;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)geoId;
- (bool)hasGeoId;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasOverallScore;
- (bool)hasPointOnLine;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (float)overallScore;
- (id)pointOnLine;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setCategoryScores:(id)arg1;
- (void)setGeoId:(unsigned long long)arg1;
- (void)setHasGeoId:(bool)arg1;
- (void)setHasOverallScore:(bool)arg1;
- (void)setOverallScore:(float)arg1;
- (void)setPointOnLine:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
