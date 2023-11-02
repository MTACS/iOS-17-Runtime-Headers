
@interface GEOPDMapsResult : PBCodable <NSCopying> {
    GEOPDBatchReverseGeocodeResult * _batchReverseGeocode;
    GEOPDCollectionResult * _collection;
    struct { 
        unsigned int has_resultType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_batchReverseGeocode : 1; 
        unsigned int read_collection : 1; 
        unsigned int read_placeQuestionnaire : 1; 
        unsigned int read_place : 1; 
        unsigned int read_publisher : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDPlace * _place;
    GEOPDPlaceQuestionnaireResult * _placeQuestionnaire;
    GEOPDPublisherResult * _publisher;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _resultType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDBatchReverseGeocodeResult *batchReverseGeocode;
@property (nonatomic, retain) GEOPDCollectionResult *collection;
@property (nonatomic, readonly) bool hasBatchReverseGeocode;
@property (nonatomic, readonly) bool hasCollection;
@property (nonatomic, readonly) bool hasPlace;
@property (nonatomic, readonly) bool hasPlaceQuestionnaire;
@property (nonatomic, readonly) bool hasPublisher;
@property (nonatomic) bool hasResultType;
@property (nonatomic, retain) GEOPDPlace *place;
@property (nonatomic, retain) GEOPDPlaceQuestionnaireResult *placeQuestionnaire;
@property (nonatomic, retain) GEOPDPublisherResult *publisher;
@property (nonatomic) int resultType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsResultType:(id)arg1;
- (id)batchReverseGeocode;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (id)collection;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBatchReverseGeocode;
- (bool)hasCollection;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasPlace;
- (bool)hasPlaceQuestionnaire;
- (bool)hasPublisher;
- (bool)hasResultType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)place;
- (id)placeQuestionnaire;
- (id)publisher;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)resultType;
- (id)resultTypeAsString:(int)arg1;
- (void)setBatchReverseGeocode:(id)arg1;
- (void)setCollection:(id)arg1;
- (void)setHasResultType:(bool)arg1;
- (void)setPlace:(id)arg1;
- (void)setPlaceQuestionnaire:(id)arg1;
- (void)setPublisher:(id)arg1;
- (void)setResultType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
