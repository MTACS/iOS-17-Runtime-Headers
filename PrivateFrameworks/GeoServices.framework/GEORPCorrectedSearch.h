
@interface GEORPCorrectedSearch : PBCodable <NSCopying> {
    unsigned int  _correctedSearchResultIndex;
    struct { 
        unsigned int has_correctedSearchResultIndex : 1; 
        unsigned int has_originalSearchResultIndex : 1; 
        unsigned int read_placeRequest : 1; 
        unsigned int read_placeResponse : 1; 
        unsigned int read_placeSearchRequest : 1; 
        unsigned int read_placeSearchResponse : 1; 
        unsigned int read_preferredSearchDisplayLocation : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned int  _originalSearchResultIndex;
    GEOPDPlaceRequest * _placeRequest;
    GEOPDPlaceResponse * _placeResponse;
    GEOPlaceSearchRequest * _placeSearchRequest;
    GEOPlaceSearchResponse * _placeSearchResponse;
    NSString * _preferredSearchDisplayLocation;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic) unsigned int correctedSearchResultIndex;
@property (nonatomic) bool hasCorrectedSearchResultIndex;
@property (nonatomic) bool hasOriginalSearchResultIndex;
@property (nonatomic, readonly) bool hasPlaceRequest;
@property (nonatomic, readonly) bool hasPlaceResponse;
@property (nonatomic, readonly) bool hasPlaceSearchRequest;
@property (nonatomic, readonly) bool hasPlaceSearchResponse;
@property (nonatomic, readonly) bool hasPreferredSearchDisplayLocation;
@property (nonatomic) unsigned int originalSearchResultIndex;
@property (nonatomic, retain) GEOPDPlaceRequest *placeRequest;
@property (nonatomic, retain) GEOPDPlaceResponse *placeResponse;
@property (nonatomic, retain) GEOPlaceSearchRequest *placeSearchRequest;
@property (nonatomic, retain) GEOPlaceSearchResponse *placeSearchResponse;
@property (nonatomic, retain) NSString *preferredSearchDisplayLocation;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (bool)containsReportableData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)correctedSearchResultIndex;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCorrectedSearchResultIndex;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasOriginalSearchResultIndex;
- (bool)hasPlaceRequest;
- (bool)hasPlaceResponse;
- (bool)hasPlaceSearchRequest;
- (bool)hasPlaceSearchResponse;
- (bool)hasPreferredSearchDisplayLocation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)originalSearchResultIndex;
- (id)placeRequest;
- (id)placeResponse;
- (id)placeSearchRequest;
- (id)placeSearchResponse;
- (id)preferredSearchDisplayLocation;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCorrectedSearchResultIndex:(unsigned int)arg1;
- (void)setHasCorrectedSearchResultIndex:(bool)arg1;
- (void)setHasOriginalSearchResultIndex:(bool)arg1;
- (void)setOriginalSearchResultIndex:(unsigned int)arg1;
- (void)setPlaceRequest:(id)arg1;
- (void)setPlaceResponse:(id)arg1;
- (void)setPlaceSearchRequest:(id)arg1;
- (void)setPlaceSearchResponse:(id)arg1;
- (void)setPreferredSearchDisplayLocation:(id)arg1;
- (void)writeTo:(id)arg1;

@end
