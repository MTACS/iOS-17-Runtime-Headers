
@interface GEORPPoiEnrichmentPlaceContext : PBCodable <NSCopying> {
    NSMutableArray * _entityNames;
    struct { 
        unsigned int read_entityNames : 1; 
        unsigned int read_localizedAddress : 1; 
        unsigned int read_mapsCategoryId : 1; 
        unsigned int read_placeCenter : 1; 
        unsigned int read_placeId : 1; 
        unsigned int read_walletCategoryId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _localizedAddress;
    NSString * _mapsCategoryId;
    GEOLatLng * _placeCenter;
    GEOPDMapsIdentifier * _placeId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _walletCategoryId;
}

@property (nonatomic, retain) NSMutableArray *entityNames;
@property (nonatomic, readonly) bool hasMapsCategoryId;
@property (nonatomic, readonly) bool hasPlaceCenter;
@property (nonatomic, readonly) bool hasPlaceId;
@property (nonatomic, readonly) bool hasWalletCategoryId;
@property (nonatomic, retain) NSMutableArray *localizedAddress;
@property (nonatomic, retain) NSString *mapsCategoryId;
@property (nonatomic, retain) GEOLatLng *placeCenter;
@property (nonatomic, retain) GEOPDMapsIdentifier *placeId;
@property (nonatomic, retain) NSString *walletCategoryId;

+ (id)buildPlaceContextWithPlaceData:(id)arg1;
+ (Class)entityNameType;
+ (bool)isValid:(id)arg1;
+ (Class)localizedAddressType;

- (void).cxx_destruct;
- (void)addEntityName:(id)arg1;
- (void)addLocalizedAddress:(id)arg1;
- (void)clearEntityNames;
- (void)clearLocalizedAddress;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entityNameAtIndex:(unsigned long long)arg1;
- (id)entityNames;
- (unsigned long long)entityNamesCount;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasMapsCategoryId;
- (bool)hasPlaceCenter;
- (bool)hasPlaceId;
- (bool)hasWalletCategoryId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)localizedAddress;
- (id)localizedAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedAddressCount;
- (id)mapsCategoryId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)placeCenter;
- (id)placeId;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntityNames:(id)arg1;
- (void)setLocalizedAddress:(id)arg1;
- (void)setMapsCategoryId:(id)arg1;
- (void)setPlaceCenter:(id)arg1;
- (void)setPlaceId:(id)arg1;
- (void)setWalletCategoryId:(id)arg1;
- (id)walletCategoryId;
- (void)writeTo:(id)arg1;

@end
