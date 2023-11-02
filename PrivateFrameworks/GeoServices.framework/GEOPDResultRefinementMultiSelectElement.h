
@interface GEOPDResultRefinementMultiSelectElement : PBCodable <NSCopying> {
    NSString * _displayName;
    int  _elementType;
    int  _evChargingConnectorType;
    struct { 
        unsigned int has_elementType : 1; 
        unsigned int has_evChargingConnectorType : 1; 
        unsigned int has_selectionSequenceNumber : 1; 
        unsigned int has_isSelected : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_displayName : 1; 
        unsigned int read_metadata : 1; 
        unsigned int read_styleAttributes : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isSelected;
    GEOPDResultRefinementMetadata * _metadata;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _selectionSequenceNumber;
    GEOStyleAttributes * _styleAttributes;
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
