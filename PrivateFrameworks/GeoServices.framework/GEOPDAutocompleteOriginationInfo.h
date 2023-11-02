
@interface GEOPDAutocompleteOriginationInfo : PBCodable <NSCopying> {
    int  _autocompleteOriginationType;
    int  _clientSoftwarePlatform;
    struct { 
        unsigned int has_autocompleteOriginationType : 1; 
        unsigned int has_clientSoftwarePlatform : 1; 
    }  _flags;
    GEOPDAutocompleteOriginationRoutePlanningParameters * _routePlanningParameters;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int autocompleteOriginationType;
@property (nonatomic) int clientSoftwarePlatform;
@property (nonatomic) bool hasAutocompleteOriginationType;
@property (nonatomic) bool hasClientSoftwarePlatform;
@property (nonatomic, readonly) bool hasRoutePlanningParameters;
@property (nonatomic, retain) GEOPDAutocompleteOriginationRoutePlanningParameters *routePlanningParameters;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAutocompleteOriginationType:(id)arg1;
- (int)StringAsClientSoftwarePlatform:(id)arg1;
- (int)autocompleteOriginationType;
- (id)autocompleteOriginationTypeAsString:(int)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (int)clientSoftwarePlatform;
- (id)clientSoftwarePlatformAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAutocompleteOriginationType;
- (bool)hasClientSoftwarePlatform;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasRoutePlanningParameters;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)routePlanningParameters;
- (void)setAutocompleteOriginationType:(int)arg1;
- (void)setClientSoftwarePlatform:(int)arg1;
- (void)setHasAutocompleteOriginationType:(bool)arg1;
- (void)setHasClientSoftwarePlatform:(bool)arg1;
- (void)setRoutePlanningParameters:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
