
@interface GEOLogMsgEventCuratedCollectionUsage : PBCodable <NSCopying> {
    double  _collectionFirstViewedDate;
    double  _collectionLastViewedDate;
    unsigned long long  _collectionMuid;
    struct { 
        unsigned int has_collectionFirstViewedDate : 1; 
        unsigned int has_collectionLastViewedDate : 1; 
        unsigned int has_collectionMuid : 1; 
        unsigned int has_viewsToday : 1; 
        unsigned int read_homeCountryCode : 1; 
        unsigned int read_homeMetroRegion : 1; 
        unsigned int read_touristInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _homeCountryCode;
    NSString * _homeMetroRegion;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOTouristInfo * _touristInfo;
    unsigned int  _viewsToday;
}

@property (nonatomic) double collectionFirstViewedDate;
@property (nonatomic) double collectionLastViewedDate;
@property (nonatomic) unsigned long long collectionMuid;
@property (nonatomic) bool hasCollectionFirstViewedDate;
@property (nonatomic) bool hasCollectionLastViewedDate;
@property (nonatomic) bool hasCollectionMuid;
@property (nonatomic, readonly) bool hasHomeCountryCode;
@property (nonatomic, readonly) bool hasHomeMetroRegion;
@property (nonatomic, readonly) bool hasTouristInfo;
@property (nonatomic) bool hasViewsToday;
@property (nonatomic, retain) NSString *homeCountryCode;
@property (nonatomic, retain) NSString *homeMetroRegion;
@property (nonatomic, retain) GEOTouristInfo *touristInfo;
@property (nonatomic) unsigned int viewsToday;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (double)collectionFirstViewedDate;
- (double)collectionLastViewedDate;
- (unsigned long long)collectionMuid;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCollectionFirstViewedDate;
- (bool)hasCollectionLastViewedDate;
- (bool)hasCollectionMuid;
- (bool)hasHomeCountryCode;
- (bool)hasHomeMetroRegion;
- (bool)hasTouristInfo;
- (bool)hasViewsToday;
- (unsigned long long)hash;
- (id)homeCountryCode;
- (id)homeMetroRegion;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCollectionFirstViewedDate:(double)arg1;
- (void)setCollectionLastViewedDate:(double)arg1;
- (void)setCollectionMuid:(unsigned long long)arg1;
- (void)setHasCollectionFirstViewedDate:(bool)arg1;
- (void)setHasCollectionLastViewedDate:(bool)arg1;
- (void)setHasCollectionMuid:(bool)arg1;
- (void)setHasViewsToday:(bool)arg1;
- (void)setHomeCountryCode:(id)arg1;
- (void)setHomeMetroRegion:(id)arg1;
- (void)setTouristInfo:(id)arg1;
- (void)setViewsToday:(unsigned int)arg1;
- (id)touristInfo;
- (unsigned int)viewsToday;
- (void)writeTo:(id)arg1;

@end
