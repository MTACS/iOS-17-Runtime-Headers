
@interface GEOPDSearchAddressLabeledToken : PBCodable <NSCopying> {
    GEOPDSearchGeoDecoration * _abbrDecoration;
    struct { 
        unsigned int read_abbrDecoration : 1; 
        unsigned int read_geoDecorations : 1; 
        unsigned int read_label : 1; 
        unsigned int read_streetRelaxationDecoration : 1; 
        unsigned int read_token : 1; 
        unsigned int read_unPaddedDoorNumbers : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _geoDecorations;
    NSString * _label;
    int  _labelType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDSearchGeoDecoration * _streetRelaxationDecoration;
    NSString * _token;
    NSMutableArray * _unPaddedDoorNumbers;
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
