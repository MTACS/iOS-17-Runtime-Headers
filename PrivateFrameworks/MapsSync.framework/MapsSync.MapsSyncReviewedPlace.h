
@interface MapsSync.MapsSyncReviewedPlace : MapsSync.MapsSyncBaseItem {
    void _anonymousCredential;
    void _anonymousCredentialUnstored;
    void _communityId;
    void _hasUserReviewed;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _lastSuggestedReviewDate;
    void _latitude;
    void _longitude;
    void _muid;
    void _rating;
    void _resultProviderIdentifier;
    void _uploadedPhotosCount;
    void _version;
}

@property (nonatomic, readonly) _TtC8MapsSync27MapsSyncAnonymousCredential *anonymousCredential;
@property (nonatomic, readonly) _TtC8MapsSync19MapsSyncCommunityID *communityId;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool hasUserReviewed;
@property (nonatomic, readonly) NSDate *lastSuggestedReviewDate;
@property (nonatomic, readonly) NSNumber *latitude;
@property (nonatomic, readonly) NSNumber *longitude;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSNumber *rating;
@property (nonatomic, readonly) NSNumber *resultProviderIdentifier;
@property (nonatomic, readonly) int uploadedPhotosCount;
@property (nonatomic, readonly) short version;

+ (void)fetch:(long long)arg1 :(long long)arg2 :(id)arg3 sort:(long long)arg4 ascending:(bool)arg5 completion:(id /* block */)arg6;
+ (void)fetch:(long long)arg1 :(long long)arg2 :(id)arg3 sort:(long long)arg4 ascending:(bool)arg5 completionWithError:(id /* block */)arg6;
+ (id)fetchWithMuids:(id)arg1;
+ (void)fetchWithMuids:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)addEditWithBlock:(id /* block */)arg1;
- (id)anonymousCredential;
- (id)communityId;
- (id)description;
- (bool)hasUserReviewed;
- (id)init;
- (id)initWithAnonymousCredential:(id)arg1;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastSuggestedReviewDate;
- (id)latitude;
- (id)longitude;
- (Class)managedObjectClass;
- (unsigned long long)muid;
- (Class)mutableObjectClass;
- (id)rating;
- (id)resultProviderIdentifier;
- (void)setPropertiesWithObject:(id)arg1;
- (int)uploadedPhotosCount;
- (short)version;

@end
