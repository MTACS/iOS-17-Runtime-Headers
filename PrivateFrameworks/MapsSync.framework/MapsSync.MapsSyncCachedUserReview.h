
@interface MapsSync.MapsSyncCachedUserReview : MapsSync.MapsSyncBaseItem {
    void _muid;
    void _numberPhotosUploaded;
    void _rating;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) int numberPhotosUploaded;
@property (nonatomic, readonly) short rating;
@property (nonatomic, readonly) _TtC8MapsSync19MapsSyncDataSession *session;

- (void)addEditWithBlock:(id /* block */)arg1;
- (id)description;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)managedObjectClass;
- (unsigned long long)muid;
- (Class)mutableObjectClass;
- (int)numberPhotosUploaded;
- (short)rating;
- (id)session;
- (void)setPropertiesWithObject:(id)arg1;

@end
