
@interface GEOPDFactoid : PBCodable <NSCopying> {
    bool  _canBeDisplayedInPlaceSummary;
    GEOPDColor * _color;
    int  _entryType;
    struct { 
        unsigned int has_number : 1; 
        unsigned int has_entryType : 1; 
        unsigned int has_unit : 1; 
        unsigned int has_canBeDisplayedInPlaceSummary : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_color : 1; 
        unsigned int read_icon : 1; 
        unsigned int read_placeId : 1; 
        unsigned int read_placeNames : 1; 
        unsigned int read_symbolColor : 1; 
        unsigned int read_text : 1; 
        unsigned int read_title : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _icon;
    double  _number;
    GEOPDMapsIdentifier * _placeId;
    NSMutableArray * _placeNames;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _symbolColor;
    NSString * _text;
    NSString * _title;
    int  _unit;
    PBUnknownFields * _unknownFields;
}

+ (bool)factoidPairAvailableForPlaceData:(id)arg1;
+ (id)factoidsForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (id)bestLocalizedPlaceName;
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
