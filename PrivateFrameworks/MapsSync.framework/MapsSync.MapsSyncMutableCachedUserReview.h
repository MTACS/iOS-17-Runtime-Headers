
@interface MapsSync.MapsSyncMutableCachedUserReview : MapsSync.MapsSyncMutableBaseItem {
    void _proxy;
}

@property (nonatomic) unsigned long long muid;
@property (nonatomic) int numberPhotosUploaded;
@property (nonatomic) short rating;

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)arg1;
- (unsigned long long)muid;
- (int)numberPhotosUploaded;
- (short)rating;
- (void)setMuid:(unsigned long long)arg1;
- (void)setNumberPhotosUploaded:(int)arg1;
- (void)setRating:(short)arg1;

@end
