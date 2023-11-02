
@interface GEOAdvisoryItem : PBCodable <NSCopying> {
    GEOAdvisoryCard * _advisoryCard;
    NSMutableArray * _analyticsMessageValues;
    struct { 
        unsigned int has_incidentIndex : 1; 
        unsigned int has_transitIncidentIndex : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_advisoryCard : 1; 
        unsigned int read_analyticsMessageValues : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned int  _incidentIndex;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _transitIncidentIndex;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOAdvisoryCard *advisoryCard;
@property (nonatomic, retain) NSMutableArray *analyticsMessageValues;
@property (nonatomic, readonly) bool hasAdvisoryCard;
@property (nonatomic) bool hasIncidentIndex;
@property (nonatomic) bool hasTransitIncidentIndex;
@property (nonatomic) unsigned int incidentIndex;
@property (nonatomic) unsigned int transitIncidentIndex;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)analyticsMessageValueType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addAnalyticsMessageValue:(id)arg1;
- (id)advisoryCard;
- (id)analyticsMessageValueAtIndex:(unsigned long long)arg1;
- (id)analyticsMessageValues;
- (unsigned long long)analyticsMessageValuesCount;
- (void)clearAnalyticsMessageValues;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAdvisoryCard;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIncidentIndex;
- (bool)hasTransitIncidentIndex;
- (unsigned long long)hash;
- (unsigned int)incidentIndex;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAdvisoryCard:(id)arg1;
- (void)setAnalyticsMessageValues:(id)arg1;
- (void)setHasIncidentIndex:(bool)arg1;
- (void)setHasTransitIncidentIndex:(bool)arg1;
- (void)setIncidentIndex:(unsigned int)arg1;
- (void)setTransitIncidentIndex:(unsigned int)arg1;
- (unsigned int)transitIncidentIndex;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
