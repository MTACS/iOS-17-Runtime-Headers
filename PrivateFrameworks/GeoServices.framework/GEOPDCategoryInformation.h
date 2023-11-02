
@interface GEOPDCategoryInformation : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_localizedMapsCategoryName : 1; 
        unsigned int read_mapsCategoryId : 1; 
        unsigned int read_mapsCategoryStyleAttributes : 1; 
        unsigned int read_walletCategoryId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLocalizedString * _localizedMapsCategoryName;
    NSString * _mapsCategoryId;
    GEOStyleAttributes * _mapsCategoryStyleAttributes;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
    NSString * _walletCategoryId;
}

@property (nonatomic, readonly) bool hasLocalizedMapsCategoryName;
@property (nonatomic, readonly) bool hasMapsCategoryId;
@property (nonatomic, readonly) bool hasMapsCategoryStyleAttributes;
@property (nonatomic, readonly) bool hasWalletCategoryId;
@property (nonatomic, retain) GEOLocalizedString *localizedMapsCategoryName;
@property (nonatomic, retain) NSString *mapsCategoryId;
@property (nonatomic, retain) GEOStyleAttributes *mapsCategoryStyleAttributes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *walletCategoryId;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocalizedMapsCategoryName;
- (bool)hasMapsCategoryId;
- (bool)hasMapsCategoryStyleAttributes;
- (bool)hasWalletCategoryId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)localizedMapsCategoryName;
- (id)mapsCategoryId;
- (id)mapsCategoryStyleAttributes;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLocalizedMapsCategoryName:(id)arg1;
- (void)setMapsCategoryId:(id)arg1;
- (void)setMapsCategoryStyleAttributes:(id)arg1;
- (void)setWalletCategoryId:(id)arg1;
- (id)unknownFields;
- (id)walletCategoryId;
- (void)writeTo:(id)arg1;

@end
