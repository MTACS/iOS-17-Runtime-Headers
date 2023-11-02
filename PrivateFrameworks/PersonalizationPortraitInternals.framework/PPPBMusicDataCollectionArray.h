
@interface PPPBMusicDataCollectionArray : PBCodable <NSCopying> {
    NSString * _assetVersion;
    NSMutableArray * _experimentalGroups;
    struct { 
        unsigned int hasMusicSubscription : 1; 
    }  _has;
    bool  _hasMusicSubscription;
    NSMutableArray * _records;
}

@property (nonatomic, retain) NSString *assetVersion;
@property (nonatomic, retain) NSMutableArray *experimentalGroups;
@property (nonatomic, readonly) bool hasAssetVersion;
@property (nonatomic) bool hasHasMusicSubscription;
@property (nonatomic) bool hasMusicSubscription;
@property (nonatomic, retain) NSMutableArray *records;

+ (Class)experimentalGroupsType;
+ (id)options;
+ (Class)recordsType;

- (void).cxx_destruct;
- (void)addExperimentalGroups:(id)arg1;
- (void)addRecords:(id)arg1;
- (id)assetVersion;
- (void)clearExperimentalGroups;
- (void)clearRecords;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)experimentalGroups;
- (id)experimentalGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)experimentalGroupsCount;
- (bool)hasAssetVersion;
- (bool)hasHasMusicSubscription;
- (bool)hasMusicSubscription;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)records;
- (id)recordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordsCount;
- (void)setAssetVersion:(id)arg1;
- (void)setExperimentalGroups:(id)arg1;
- (void)setHasHasMusicSubscription:(bool)arg1;
- (void)setHasMusicSubscription:(bool)arg1;
- (void)setRecords:(id)arg1;
- (void)writeTo:(id)arg1;

@end
