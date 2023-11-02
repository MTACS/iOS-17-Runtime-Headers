
@interface GEOPDPlaceCollectionItem : PBCodable <NSCopying> {
    GEOPDQuickLinkItem * _appClip;
    bool  _disableAppClipFallback;
    bool  _enableImageFallback;
    struct { 
        unsigned int has_disableAppClipFallback : 1; 
        unsigned int has_enableImageFallback : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_appClip : 1; 
        unsigned int read_itemDescriptionBytes : 1; 
        unsigned int read_itemDescriptionHtmls : 1; 
        unsigned int read_itemDescriptions : 1; 
        unsigned int read_itemId : 1; 
        unsigned int read_photos : 1; 
        unsigned int read_punchOutTexts : 1; 
        unsigned int read_url : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _itemDescriptionBytes;
    NSMutableArray * _itemDescriptionHtmls;
    NSMutableArray * _itemDescriptions;
    GEOPDMapsIdentifier * _itemId;
    NSMutableArray * _photos;
    NSMutableArray * _punchOutTexts;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
    NSString * _url;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)itemDescription;
- (id)itemHTMLDescription;
- (id)jsonRepresentation;
- (id)punchOutText;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
