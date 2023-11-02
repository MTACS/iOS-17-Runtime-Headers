
@interface GEOPDPlug : PBCodable <NSCopying> {
    GEOPDAvailabilityInfo * _availabilityInfo;
    GEOPDChargerInfo * _chargerInfo;
    int  _connectorType;
    NSString * _connectorTypeDisplayText;
    NSString * _currentTypeDisplayText;
    struct { 
        unsigned int has_connectorType : 1; 
        unsigned int has_powerWatts : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_availabilityInfo : 1; 
        unsigned int read_chargerInfo : 1; 
        unsigned int read_connectorTypeDisplayText : 1; 
        unsigned int read_currentTypeDisplayText : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned int  _powerWatts;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
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
