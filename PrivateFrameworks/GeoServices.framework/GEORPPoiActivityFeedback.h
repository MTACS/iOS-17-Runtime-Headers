
@interface GEORPPoiActivityFeedback : PBCodable <NSCopying> {
    struct { 
        unsigned int has_isDataCorrect : 1; 
        unsigned int has_isDataUseful : 1; 
        unsigned int has_isVisualRepresentationValid : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_representativeHours : 1; 
        unsigned int read_mapsId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isDataCorrect;
    bool  _isDataUseful;
    bool  _isVisualRepresentationValid;
    GEOPDMapsIdentifier * _mapsId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _representativeHours;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIsDataCorrect;
@property (nonatomic) bool hasIsDataUseful;
@property (nonatomic) bool hasIsVisualRepresentationValid;
@property (nonatomic, readonly) bool hasMapsId;
@property (nonatomic) bool isDataCorrect;
@property (nonatomic) bool isDataUseful;
@property (nonatomic) bool isVisualRepresentationValid;
@property (nonatomic, retain) GEOPDMapsIdentifier *mapsId;
@property (nonatomic, readonly) unsigned int*representativeHours;
@property (nonatomic, readonly) unsigned long long representativeHoursCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addRepresentativeHours:(unsigned int)arg1;
- (void)clearRepresentativeHours;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIsDataCorrect;
- (bool)hasIsDataUseful;
- (bool)hasIsVisualRepresentationValid;
- (bool)hasMapsId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isDataCorrect;
- (bool)isDataUseful;
- (bool)isEqual:(id)arg1;
- (bool)isVisualRepresentationValid;
- (id)jsonRepresentation;
- (id)mapsId;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int*)representativeHours;
- (unsigned int)representativeHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)representativeHoursCount;
- (void)setHasIsDataCorrect:(bool)arg1;
- (void)setHasIsDataUseful:(bool)arg1;
- (void)setHasIsVisualRepresentationValid:(bool)arg1;
- (void)setIsDataCorrect:(bool)arg1;
- (void)setIsDataUseful:(bool)arg1;
- (void)setIsVisualRepresentationValid:(bool)arg1;
- (void)setMapsId:(id)arg1;
- (void)setRepresentativeHours:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
