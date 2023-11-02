
@interface BRCSideCarInfo : NSObject {
    BRFieldCKInfo * _ckInfo;
    long long  _favoriteRank;
    NSData * _finderTags;
    long long  _lastUsedTime;
}

@property (nonatomic, retain) BRFieldCKInfo *ckInfo;
@property (nonatomic) long long favoriteRank;
@property (nonatomic, retain) NSData *finderTags;
@property (nonatomic) long long lastUsedTime;

- (void).cxx_destruct;
- (id)ckInfo;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (long long)favoriteRank;
- (id)finderTags;
- (bool)hasfieldsToSync;
- (long long)lastUsedTime;
- (void)setCkInfo:(id)arg1;
- (void)setFavoriteRank:(long long)arg1;
- (void)setFinderTags:(id)arg1;
- (void)setLastUsedTime:(long long)arg1;

@end
