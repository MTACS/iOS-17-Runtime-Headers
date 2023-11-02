
@interface MSReviewedPlace : MapsSync.MapsSyncObject {
    void _hasUserReviewed;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _lastSuggestedReviewDate;
    void _latitude;
    void _longitude;
    void _mapItemIdComparableRepresentation;
    void _muid;
    void _positionIndex;
    void _rating;
    void _resultProviderIdentifier;
    void _uploadedPhotosCount;
    void _version;
}

@property (nonatomic, readonly) MSAnonymousCredential *anonymousCredential;
@property (nonatomic, readonly) MSCommunityID *communityID;
@property (nonatomic) bool hasUserReviewed;
@property (nonatomic, copy) NSDate *lastSuggestedReviewDate;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, copy) NSData *mapItemIdComparableRepresentation;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) long long positionIndex;
@property (nonatomic, retain) NSNumber *rating;
@property (nonatomic, retain) NSNumber *resultProviderIdentifier;
@property (nonatomic) int uploadedPhotosCount;
@property (nonatomic) short version;

+ (Class)managedClass;

- (void).cxx_destruct;
- (id)anonymousCredential;
- (id)communityID;
- (bool)hasUserReviewed;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 hasUserReviewed:(bool)arg2 lastSuggestedReviewDate:(id)arg3 latitude:(id)arg4 longitude:(id)arg5 mapItemIdComparableRepresentation:(id)arg6 muid:(unsigned long long)arg7 positionIndex:(long long)arg8 rating:(id)arg9 resultProviderIdentifier:(id)arg10 uploadedPhotosCount:(int)arg11 version:(short)arg12;
- (id)lastSuggestedReviewDate;
- (id)latitude;
- (id)longitude;
- (id)mapItemIdComparableRepresentation;
- (unsigned long long)muid;
- (long long)positionIndex;
- (id)rating;
- (id)resultProviderIdentifier;
- (bool)setAnonymousCredential:(id)arg1 error:(id*)arg2;
- (bool)setCommunityID:(id)arg1 error:(id*)arg2;
- (void)setHasUserReviewed:(bool)arg1;
- (void)setLastSuggestedReviewDate:(id)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setMapItemIdComparableRepresentation:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setPositionIndex:(long long)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;
- (void)setRating:(id)arg1;
- (void)setResultProviderIdentifier:(id)arg1;
- (void)setUploadedPhotosCount:(int)arg1;
- (void)setVersion:(short)arg1;
- (int)uploadedPhotosCount;
- (short)version;

@end
