
@interface GEOPDAnnotatedItemList : PBCodable <NSCopying> {
    int  _annotatedItemStyle;
    struct { 
        unsigned int has_annotatedItemStyle : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_picItemContainer : 1; 
        unsigned int read_textItemContainer : 1; 
        unsigned int read_title : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDPictureItemContainer * _picItemContainer;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDTextItemContainer * _textItemContainer;
    NSString * _title;
    PBUnknownFields * _unknownFields;
}

+ (id)annotatedItemListForPlaceData:(id)arg1;

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
