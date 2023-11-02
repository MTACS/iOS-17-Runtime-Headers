
@interface GEOPDAutocompleteEntryOfflineArea : PBCodable <NSCopying> {
    bool  _availableForDownload;
    unsigned long long  _featureId;
    struct { 
        unsigned int has_featureId : 1; 
        unsigned int has_availableForDownload : 1; 
    }  _flags;
    GEOPDMapsIdentifier * _mapsId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool availableForDownload;
@property (nonatomic) unsigned long long featureId;
@property (nonatomic) bool hasAvailableForDownload;
@property (nonatomic) bool hasFeatureId;
@property (nonatomic, readonly) bool hasMapsId;
@property (nonatomic, retain) GEOPDMapsIdentifier *mapsId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (bool)availableForDownload;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)featureId;
- (bool)hasAvailableForDownload;
- (bool)hasFeatureId;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasMapsId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)mapsId;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAvailableForDownload:(bool)arg1;
- (void)setFeatureId:(unsigned long long)arg1;
- (void)setHasAvailableForDownload:(bool)arg1;
- (void)setHasFeatureId:(bool)arg1;
- (void)setMapsId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
