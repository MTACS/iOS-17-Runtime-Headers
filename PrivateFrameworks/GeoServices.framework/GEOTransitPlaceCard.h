
@interface GEOTransitPlaceCard : PBCodable <NSCopying> {
    struct { 
        unsigned int has_transitCategory : 1; 
        unsigned int read_incidentType : 1; 
        unsigned int read_transitDepartureSequenceUsage : 1; 
        unsigned int read_transitSystemName : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _incidentType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _transitCategory;
    GEOTransitDepartureSequenceUsage * _transitDepartureSequenceUsage;
    NSString * _transitSystemName;
}

@property (nonatomic, readonly) bool hasIncidentType;
@property (nonatomic) bool hasTransitCategory;
@property (nonatomic, readonly) bool hasTransitDepartureSequenceUsage;
@property (nonatomic, readonly) bool hasTransitSystemName;
@property (nonatomic, retain) NSString *incidentType;
@property (nonatomic) int transitCategory;
@property (nonatomic, retain) GEOTransitDepartureSequenceUsage *transitDepartureSequenceUsage;
@property (nonatomic, retain) NSString *transitSystemName;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsTransitCategory:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIncidentType;
- (bool)hasTransitCategory;
- (bool)hasTransitDepartureSequenceUsage;
- (bool)hasTransitSystemName;
- (unsigned long long)hash;
- (id)incidentType;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTransitCategory:(bool)arg1;
- (void)setIncidentType:(id)arg1;
- (void)setTransitCategory:(int)arg1;
- (void)setTransitDepartureSequenceUsage:(id)arg1;
- (void)setTransitSystemName:(id)arg1;
- (int)transitCategory;
- (id)transitCategoryAsString:(int)arg1;
- (id)transitDepartureSequenceUsage;
- (id)transitSystemName;
- (void)writeTo:(id)arg1;

@end
