
@interface HDCloudSyncCodableRegistry : PBCodable <NSCopying> {
    bool  _deleted;
    NSMutableArray * _disabledOwnerIdentifiers;
    NSMutableArray * _disabledSyncIdentities;
    NSString * _displayFirstName;
    NSString * _displayLastName;
    double  _displayNameModificationDate;
    struct { 
        unsigned int displayNameModificationDate : 1; 
        unsigned int deleted : 1; 
    }  _has;
    HDCloudSyncCodableProfileIdentifier * _ownerProfileIdentifier;
    HDCloudSyncCodableProfileIdentifier * _sharedProfileIdentifier;
    NSMutableArray * _stores;
}

@property (nonatomic) bool deleted;
@property (nonatomic, retain) NSMutableArray *disabledOwnerIdentifiers;
@property (nonatomic, retain) NSMutableArray *disabledSyncIdentities;
@property (nonatomic, retain) NSString *displayFirstName;
@property (nonatomic, retain) NSString *displayLastName;
@property (nonatomic) double displayNameModificationDate;
@property (nonatomic) bool hasDeleted;
@property (nonatomic, readonly) bool hasDisplayFirstName;
@property (nonatomic, readonly) bool hasDisplayLastName;
@property (nonatomic) bool hasDisplayNameModificationDate;
@property (nonatomic, readonly) bool hasOwnerProfileIdentifier;
@property (nonatomic, readonly) bool hasSharedProfileIdentifier;
@property (nonatomic, retain) HDCloudSyncCodableProfileIdentifier *ownerProfileIdentifier;
@property (nonatomic, retain) HDCloudSyncCodableProfileIdentifier *sharedProfileIdentifier;
@property (nonatomic, retain) NSMutableArray *stores;

+ (Class)disabledOwnerIdentifiersType;
+ (Class)disabledSyncIdentitiesType;
+ (Class)storesType;

- (void).cxx_destruct;
- (void)addDisabledOwnerIdentifiers:(id)arg1;
- (void)addDisabledSyncIdentities:(id)arg1;
- (void)addStores:(id)arg1;
- (void)clearDisabledOwnerIdentifiers;
- (void)clearDisabledSyncIdentities;
- (void)clearStores;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deleted;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disabledOwnerIdentifiers;
- (id)disabledOwnerIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)disabledOwnerIdentifiersCount;
- (id)disabledSyncIdentities;
- (id)disabledSyncIdentitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)disabledSyncIdentitiesCount;
- (id)displayFirstName;
- (id)displayLastName;
- (double)displayNameModificationDate;
- (bool)hasDeleted;
- (bool)hasDisplayFirstName;
- (bool)hasDisplayLastName;
- (bool)hasDisplayNameModificationDate;
- (bool)hasOwnerProfileIdentifier;
- (bool)hasSharedProfileIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)ownerProfileIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setDisabledOwnerIdentifiers:(id)arg1;
- (void)setDisabledSyncIdentities:(id)arg1;
- (void)setDisplayFirstName:(id)arg1;
- (void)setDisplayLastName:(id)arg1;
- (void)setDisplayNameModificationDate:(double)arg1;
- (void)setHasDeleted:(bool)arg1;
- (void)setHasDisplayNameModificationDate:(bool)arg1;
- (void)setOwnerProfileIdentifier:(id)arg1;
- (void)setSharedProfileIdentifier:(id)arg1;
- (void)setStores:(id)arg1;
- (id)sharedProfileIdentifier;
- (id)stores;
- (id)storesAtIndex:(unsigned long long)arg1;
- (unsigned long long)storesCount;
- (void)writeTo:(id)arg1;

@end
