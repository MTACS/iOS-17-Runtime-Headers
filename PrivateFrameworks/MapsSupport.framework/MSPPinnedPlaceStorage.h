
@interface MSPPinnedPlaceStorage : PBCodable <NSCopying> {
    NSMutableArray * _contactStorages;
    NSString * _customName;
    struct { 
        unsigned int type : 1; 
        unsigned int hidden : 1; 
    }  _has;
    bool  _hidden;
    NSString * _identifier;
    GEOMapItemStorage * _mapItemStorage;
    NSString * _originatingAddressString;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *contactStorages;
@property (nonatomic, retain) NSString *customName;
@property (nonatomic, readonly) bool hasCustomName;
@property (nonatomic) bool hasHidden;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasMapItemStorage;
@property (nonatomic, readonly) bool hasOriginatingAddressString;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hidden;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, retain) NSString *originatingAddressString;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)contactStorageType;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)addContactStorage:(id)arg1;
- (void)clearContactStorages;
- (id)contactStorageAtIndex:(unsigned long long)arg1;
- (id)contactStorages;
- (unsigned long long)contactStoragesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customName;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCustomName;
- (bool)hasHidden;
- (bool)hasIdentifier;
- (bool)hasMapItemStorage;
- (bool)hasOriginatingAddressString;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)hidden;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)mapItemStorage;
- (void)mergeFrom:(id)arg1;
- (id)originatingAddressString;
- (bool)readFrom:(id)arg1;
- (void)setContactStorages:(id)arg1;
- (void)setCustomName:(id)arg1;
- (void)setHasHidden:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMapItemStorage:(id)arg1;
- (void)setOriginatingAddressString:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
