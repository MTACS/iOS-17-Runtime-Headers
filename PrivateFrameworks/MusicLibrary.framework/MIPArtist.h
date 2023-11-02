
@interface MIPArtist : PBCodable <NSCopying> {
    NSString * _artworkId;
    NSString * _cloudUniversalLibraryId;
    struct { 
        unsigned int likedStateChangedDate : 1; 
        unsigned int persistentId : 1; 
        unsigned int storeId : 1; 
        unsigned int likedState : 1; 
    }  _has;
    NSMutableArray * _libraryIdentifiers;
    int  _likedState;
    long long  _likedStateChangedDate;
    NSString * _name;
    long long  _persistentId;
    NSString * _sortName;
    long long  _storeId;
}

@property (nonatomic, retain) NSString *artworkId;
@property (nonatomic, retain) NSString *cloudUniversalLibraryId;
@property (nonatomic, readonly) bool hasArtworkId;
@property (nonatomic, readonly) bool hasCloudUniversalLibraryId;
@property (nonatomic) bool hasLikedState;
@property (nonatomic) bool hasLikedStateChangedDate;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasPersistentId;
@property (nonatomic, readonly) bool hasSortName;
@property (nonatomic) bool hasStoreId;
@property (nonatomic, retain) NSMutableArray *libraryIdentifiers;
@property (nonatomic) int likedState;
@property (nonatomic) long long likedStateChangedDate;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) long long persistentId;
@property (nonatomic, retain) NSString *sortName;
@property (nonatomic) long long storeId;

+ (Class)libraryIdentifiersType;

- (void).cxx_destruct;
- (void)addLibraryIdentifiers:(id)arg1;
- (id)artworkId;
- (void)clearLibraryIdentifiers;
- (id)cloudUniversalLibraryId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArtworkId;
- (bool)hasCloudUniversalLibraryId;
- (bool)hasLikedState;
- (bool)hasLikedStateChangedDate;
- (bool)hasName;
- (bool)hasPersistentId;
- (bool)hasSortName;
- (bool)hasStoreId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)libraryIdentifiers;
- (id)libraryIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)libraryIdentifiersCount;
- (int)likedState;
- (long long)likedStateChangedDate;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (long long)persistentId;
- (bool)readFrom:(id)arg1;
- (void)setArtworkId:(id)arg1;
- (void)setCloudUniversalLibraryId:(id)arg1;
- (void)setHasLikedState:(bool)arg1;
- (void)setHasLikedStateChangedDate:(bool)arg1;
- (void)setHasPersistentId:(bool)arg1;
- (void)setHasStoreId:(bool)arg1;
- (void)setLibraryIdentifiers:(id)arg1;
- (void)setLikedState:(int)arg1;
- (void)setLikedStateChangedDate:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setPersistentId:(long long)arg1;
- (void)setSortName:(id)arg1;
- (void)setStoreId:(long long)arg1;
- (id)sortName;
- (long long)storeId;
- (void)writeTo:(id)arg1;

@end
