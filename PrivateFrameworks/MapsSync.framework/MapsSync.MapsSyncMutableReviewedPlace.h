
@interface MapsSync.MapsSyncMutableReviewedPlace : MapsSync.MapsSyncMutableBaseItem {
    void _proxyObject;
}

@property (nonatomic, retain) _TtC8MapsSync27MapsSyncAnonymousCredential *anonymousCredential;
@property (nonatomic, retain) _TtC8MapsSync19MapsSyncCommunityID *communityID;
@property (nonatomic) bool hasUserReviewed;
@property (nonatomic, copy) NSDate *lastSuggestedReviewDate;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSNumber *rating;
@property (nonatomic) int uploadedPhotosCount;
@property (nonatomic) short version;

- (void).cxx_destruct;
- (id)anonymousCredential;
- (id)communityID;
- (bool)hasUserReviewed;
- (id)initWithProxyObject:(id)arg1;
- (id)lastSuggestedReviewDate;
- (unsigned long long)muid;
- (id)rating;
- (void)setAnonymousCredential:(id)arg1;
- (void)setCommunityID:(id)arg1;
- (void)setHasUserReviewed:(bool)arg1;
- (void)setLastSuggestedReviewDate:(id)arg1;
- (void)setMapItemIdentifier:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setRating:(id)arg1;
- (void)setUploadedPhotosCount:(int)arg1;
- (void)setVersion:(short)arg1;
- (int)uploadedPhotosCount;
- (short)version;

@end
