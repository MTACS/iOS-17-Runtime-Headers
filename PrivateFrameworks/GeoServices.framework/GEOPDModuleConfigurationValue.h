
@interface GEOPDModuleConfigurationValue : PBCodable <NSCopying> {
    GEOPDBusinessInfosModuleConfiguration * _businessInfosModuleConfiguration;
    GEOPDButtonModuleConfiguration * _buttonModuleConfiguration;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_businessInfosModuleConfiguration : 1; 
        unsigned int read_buttonModuleConfiguration : 1; 
        unsigned int read_headerButtonsConfiguration : 1; 
        unsigned int read_hikingAssociationModuleConfiguration : 1; 
        unsigned int read_placeInfosModuleConfiguration : 1; 
        unsigned int read_relatedPlaceModuleConfiguration : 1; 
        unsigned int read_ribbonModuleConfiguration : 1; 
        unsigned int read_templatePlaceModuleConfiguration : 1; 
        unsigned int read_unifiedActionModuleConfiguration : 1; 
        unsigned int read_webModuleConfiguration : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDHeaderButtonsConfiguration * _headerButtonsConfiguration;
    GEOPDHikingAssociationModuleConfiguration * _hikingAssociationModuleConfiguration;
    GEOPDPlaceInfosModuleConfiguration * _placeInfosModuleConfiguration;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDRelatedPlaceModuleConfiguration * _relatedPlaceModuleConfiguration;
    GEOPDPlaceRibbonConfiguration * _ribbonModuleConfiguration;
    GEOPDTemplatePlaceModuleConfiguration * _templatePlaceModuleConfiguration;
    GEOPDUnifiedActionModuleConfiguration * _unifiedActionModuleConfiguration;
    PBUnknownFields * _unknownFields;
    GEOPDWebModuleConfiguration * _webModuleConfiguration;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
