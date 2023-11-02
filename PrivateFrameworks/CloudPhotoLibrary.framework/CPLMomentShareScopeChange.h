
@interface CPLMomentShareScopeChange : CPLScopeChange {
    NSDate * _creationDate;
    NSDate * _endDate;
    NSDate * _expiryDate;
    NSString * _originatingScopeIdentifier;
    NSData * _previewImageData;
    long long  _promisedAssetCount;
    long long  _promisedPhotosCount;
    long long  _promisedVideosCount;
    NSDate * _startDate;
    NSData * _thumbnailImageData;
}

@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSDate *expiryDate;
@property (nonatomic, copy) NSString *originatingScopeIdentifier;
@property (nonatomic, copy) NSData *previewImageData;
@property (nonatomic) long long promisedAssetCount;
@property (nonatomic) long long promisedPhotosCount;
@property (nonatomic) long long promisedVideosCount;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, copy) NSData *thumbnailImageData;

- (void).cxx_destruct;
- (id)creationDate;
- (id)endDate;
- (id)expiryDate;
- (id)momentShare;
- (id)originatingScopeIdentifier;
- (id)previewImageData;
- (long long)promisedAssetCount;
- (long long)promisedPhotosCount;
- (long long)promisedVideosCount;
- (void)setCreationDate:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setExpiryDate:(id)arg1;
- (void)setLibraryInfo:(id)arg1;
- (void)setMomentShare:(id)arg1;
- (void)setOriginatingScopeIdentifier:(id)arg1;
- (void)setPreviewImageData:(id)arg1;
- (void)setPromisedAssetCount:(long long)arg1;
- (void)setPromisedPhotosCount:(long long)arg1;
- (void)setPromisedVideosCount:(long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)setThumbnailImageData:(id)arg1;
- (id)startDate;
- (id)thumbnailImageData;
- (void)updateScopeFromScopeChange:(id)arg1 direction:(unsigned long long)arg2 didHaveChanges:(bool*)arg3;

@end
