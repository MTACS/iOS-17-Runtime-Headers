
@interface GEOPDPlaceCollection : PBCodable <NSCopying> {
    NSString * _authorName;
    GEOPDCaptionedPhoto * _authorPhoto;
    NSMutableArray * _collectionClassDisplayNames;
    NSMutableArray * _collectionClassSpokenNames;
    NSMutableArray * _collectionDescriptionBytes;
    NSMutableArray * _collectionDescriptionHtmls;
    NSMutableArray * _collectionDescriptions;
    GEOPDMapsIdentifier * _collectionId;
    NSMutableArray * _collectionItemDescriptionHtmls;
    NSMutableArray * _collectionItemDescriptions;
    NSMutableArray * _displayTitles;
    bool  _enableFallbackImagesForItems;
    int  _errorState;
    struct { 
        unsigned int has_modifiedTime : 1; 
        unsigned int has_errorState : 1; 
        unsigned int has_numItems : 1; 
        unsigned int has_enableFallbackImagesForItems : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_authorName : 1; 
        unsigned int read_authorPhoto : 1; 
        unsigned int read_collectionClassDisplayNames : 1; 
        unsigned int read_collectionClassSpokenNames : 1; 
        unsigned int read_collectionDescriptionBytes : 1; 
        unsigned int read_collectionDescriptionHtmls : 1; 
        unsigned int read_collectionDescriptions : 1; 
        unsigned int read_collectionId : 1; 
        unsigned int read_collectionItemDescriptionHtmls : 1; 
        unsigned int read_collectionItemDescriptions : 1; 
        unsigned int read_displayTitles : 1; 
        unsigned int read_itemIds : 1; 
        unsigned int read_longSpokenTitles : 1; 
        unsigned int read_longTitles : 1; 
        unsigned int read_mediaLinks : 1; 
        unsigned int read_photos : 1; 
        unsigned int read_placeCollectionItems : 1; 
        unsigned int read_publisherId : 1; 
        unsigned int read_publisher : 1; 
        unsigned int read_spokenTitles : 1; 
        unsigned int read_url : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _itemIds;
    NSMutableArray * _longSpokenTitles;
    NSMutableArray * _longTitles;
    NSMutableArray * _mediaLinks;
    double  _modifiedTime;
    unsigned int  _numItems;
    NSMutableArray * _photos;
    NSMutableArray * _placeCollectionItems;
    GEOPDPublisher * _publisher;
    GEOPDMapsIdentifier * _publisherId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _spokenTitles;
    PBUnknownFields * _unknownFields;
    NSString * _url;
}

+ (id)collectionComponentsForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (id)collectionDescription;
- (id)collectionHTMLDescription;
- (id)collectionLongTitle;
- (id)collectionTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)publisherDescriptionOfCollectionItem;
- (id)publisherHTMLDescriptionOfCollectionItem;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
