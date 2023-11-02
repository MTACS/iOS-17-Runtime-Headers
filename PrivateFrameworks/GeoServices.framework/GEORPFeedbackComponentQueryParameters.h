
@interface GEORPFeedbackComponentQueryParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_poiEnrichmentQueryParameters : 1; 
        unsigned int read_rapQueryParameters : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEORPPoiEnrichmentQueryParameters * _poiEnrichmentQueryParameters;
    GEORPRapQueryParameters * _rapQueryParameters;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasPoiEnrichmentQueryParameters;
@property (nonatomic, readonly) bool hasRapQueryParameters;
@property (nonatomic, retain) GEORPPoiEnrichmentQueryParameters *poiEnrichmentQueryParameters;
@property (nonatomic, retain) GEORPRapQueryParameters *rapQueryParameters;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPoiEnrichmentQueryParameters;
- (bool)hasRapQueryParameters;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)poiEnrichmentQueryParameters;
- (id)rapQueryParameters;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setPoiEnrichmentQueryParameters:(id)arg1;
- (void)setRapQueryParameters:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
