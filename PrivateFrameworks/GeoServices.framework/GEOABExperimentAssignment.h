
@interface GEOABExperimentAssignment : PBCodable <NSCopying> {
    GEOABDebugPanelExperimentBranch * _debugExperimentBranch;
    struct { 
        unsigned int has_placeRequestType : 1; 
        unsigned int has_serviceType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_debugExperimentBranch : 1; 
        unsigned int read_offlineAbJson : 1; 
        unsigned int read_querySubstring : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _offlineAbJson;
    int  _placeRequestType;
    NSString * _querySubstring;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _serviceType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOABDebugPanelExperimentBranch *debugExperimentBranch;
@property (nonatomic, readonly) bool hasDebugExperimentBranch;
@property (nonatomic, readonly) bool hasOfflineAbJson;
@property (nonatomic) bool hasPlaceRequestType;
@property (nonatomic, readonly) bool hasQuerySubstring;
@property (nonatomic) bool hasServiceType;
@property (nonatomic, retain) NSString *offlineAbJson;
@property (nonatomic) int placeRequestType;
@property (nonatomic, retain) NSString *querySubstring;
@property (nonatomic) int serviceType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsPlaceRequestType:(id)arg1;
- (int)StringAsServiceType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugExperimentBranch;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDebugExperimentBranch;
- (bool)hasOfflineAbJson;
- (bool)hasPlaceRequestType;
- (bool)hasQuerySubstring;
- (bool)hasServiceType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)offlineAbJson;
- (int)placeRequestType;
- (id)placeRequestTypeAsString:(int)arg1;
- (id)querySubstring;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)serviceType;
- (id)serviceTypeAsString:(int)arg1;
- (void)setDebugExperimentBranch:(id)arg1;
- (void)setHasPlaceRequestType:(bool)arg1;
- (void)setHasServiceType:(bool)arg1;
- (void)setOfflineAbJson:(id)arg1;
- (void)setPlaceRequestType:(int)arg1;
- (void)setQuerySubstring:(id)arg1;
- (void)setServiceType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
