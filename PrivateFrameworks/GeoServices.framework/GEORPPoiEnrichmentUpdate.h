
@interface GEORPPoiEnrichmentUpdate : PBCodable <NSCopying> {
    int  _action;
    struct { 
        unsigned int has_action : 1; 
        unsigned int read_imageIds : 1; 
        unsigned int read_imageUpdates : 1; 
        unsigned int read_placeContext : 1; 
        unsigned int read_place : 1; 
        unsigned int read_scorecardUpdate : 1; 
        unsigned int read_scorecard : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _imageIds;
    NSMutableArray * _imageUpdates;
    GEOPDPlace * _place;
    GEORPPoiEnrichmentPlaceContext * _placeContext;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORPScorecard * _scorecard;
    GEORPScorecardUpdate * _scorecardUpdate;
}

@property (nonatomic) int action;
@property (nonatomic) bool hasAction;
@property (nonatomic, readonly) bool hasPlace;
@property (nonatomic, readonly) bool hasPlaceContext;
@property (nonatomic, readonly) bool hasScorecard;
@property (nonatomic, readonly) bool hasScorecardUpdate;
@property (nonatomic, retain) NSMutableArray *imageIds;
@property (nonatomic, retain) NSMutableArray *imageUpdates;
@property (nonatomic, retain) GEOPDPlace *place;
@property (nonatomic, retain) GEORPPoiEnrichmentPlaceContext *placeContext;
@property (nonatomic, retain) GEORPScorecard *scorecard;
@property (nonatomic, retain) GEORPScorecardUpdate *scorecardUpdate;

+ (Class)imageIdType;
+ (Class)imageUpdateType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAction:(id)arg1;
- (int)action;
- (id)actionAsString:(int)arg1;
- (void)addImageId:(id)arg1;
- (void)addImageUpdate:(id)arg1;
- (void)clearImageIds;
- (void)clearImageUpdates;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAction;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasPlace;
- (bool)hasPlaceContext;
- (bool)hasScorecard;
- (bool)hasScorecardUpdate;
- (unsigned long long)hash;
- (id)imageIdAtIndex:(unsigned long long)arg1;
- (id)imageIds;
- (unsigned long long)imageIdsCount;
- (id)imageUpdateAtIndex:(unsigned long long)arg1;
- (id)imageUpdates;
- (unsigned long long)imageUpdatesCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)place;
- (id)placeContext;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)scorecard;
- (id)scorecardUpdate;
- (void)setAction:(int)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setImageIds:(id)arg1;
- (void)setImageUpdates:(id)arg1;
- (void)setPlace:(id)arg1;
- (void)setPlaceContext:(id)arg1;
- (void)setScorecard:(id)arg1;
- (void)setScorecardUpdate:(id)arg1;
- (void)writeTo:(id)arg1;

@end
