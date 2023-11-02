
@interface GEOPDVenueInfo : PBCodable <NSCopying> {
    int  _featureType;
    NSMutableArray * _filterElements;
    struct { 
        unsigned int has_featureType : 1; 
        unsigned int has_goInsideLevel : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_filterElements : 1; 
        unsigned int read_itemList : 1; 
        unsigned int read_locatedInside : 1; 
        unsigned int read_venueFeatureIds : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _goInsideLevel;
    GEOPDVenueItemList * _itemList;
    GEOPDLocatedInsideInfo * _locatedInside;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _venueFeatureIds;
}

+ (id)venueInfoForPlaceData:(id)arg1;

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
