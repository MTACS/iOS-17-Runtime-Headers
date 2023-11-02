
@interface CPLMomentShare : NSObject <NSCopying, NSSecureCoding> {
    long long  _assetCount;
    NSDate * _creationDate;
    NSDate * _endDate;
    NSDate * _expiryDate;
    NSString * _identifier;
    short  _mode;
    NSString * _originatingScopeIdentifier;
    NSArray * _participants;
    long long  _photosCount;
    NSData * _previewData;
    NSURL * _shareURL;
    NSDate * _startDate;
    NSData * _thumbnailImageData;
    NSString * _title;
    long long  _videosCount;
}

@property (nonatomic) long long assetCount;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSDate *expiryDate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) short mode;
@property (nonatomic, copy) NSString *originatingScopeIdentifier;
@property (nonatomic, copy) NSArray *participants;
@property (nonatomic) long long photosCount;
@property (nonatomic, copy) NSData *previewData;
@property (nonatomic, copy) NSURL *shareURL;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, copy) NSData *thumbnailImageData;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long videosCount;

+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)assetCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)expiryDate;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithScopeChange:(id)arg1;
- (bool)isEqual:(id)arg1;
- (short)mode;
- (id)originatingScopeIdentifier;
- (id)participants;
- (long long)photosCount;
- (id)previewData;
- (void)setAssetCount:(long long)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setExpiryDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMode:(short)arg1;
- (void)setOriginatingScopeIdentifier:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setPhotosCount:(long long)arg1;
- (void)setPreviewData:(id)arg1;
- (void)setShareURL:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setThumbnailImageData:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVideosCount:(long long)arg1;
- (id)shareURL;
- (id)startDate;
- (id)thumbnailImageData;
- (id)title;
- (id)translateToScopeChangeWithScopeType:(long long)arg1;
- (void)updateScopeChange:(id)arg1;
- (long long)videosCount;

@end
