
@interface PXTimelineEntry : NSObject <NSCopying> {
    NSString * _assetLocalIdentifier;
    unsigned long long  _contentType;
    NSURL * _deeplink;
    NSDate * _endTime;
    NSString * _localIdentifier;
    NSString * _proactiveCriterion;
    unsigned long long  _rejectReason;
    double  _relevanceScore;
    NSString * _sourceIdentifier;
    unsigned long long  _sourceType;
    NSDate * _startTime;
    NSString * _subtitle;
    PXTimelineCrop * _suggestedCrop;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *assetLocalIdentifier;
@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, readonly) NSURL *deeplink;
@property (nonatomic, retain) NSDate *endTime;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, retain) NSString *proactiveCriterion;
@property (nonatomic) unsigned long long rejectReason;
@property (nonatomic, readonly) double relevanceScore;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (nonatomic, readonly) unsigned long long sourceType;
@property (nonatomic, retain) NSDate *startTime;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, retain) PXTimelineCrop *suggestedCrop;
@property (nonatomic, readonly) NSString *title;

+ (id)descriptionForRejectReason:(unsigned long long)arg1;
+ (id)descriptionForTimelineContentType:(unsigned long long)arg1;
+ (id)emptyWidgetURLForContentType:(unsigned long long)arg1 sourceIdentifier:(id)arg2;
+ (id)fallbackEntryForAlbumNotFoundWithLocalIdentifier:(id)arg1 size:(unsigned long long)arg2;
+ (id)fallbackEntryForContentType:(unsigned long long)arg1 size:(unsigned long long)arg2;
+ (id)fallbackEntryForContentType:(unsigned long long)arg1 sourceIdentifier:(id)arg2 size:(unsigned long long)arg3;
+ (id)placeholderEntryForContentType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_initWithTimelineEntry:(id)arg1;
- (id)_localTimeFormatter;
- (id)_utcTimeFormatter;
- (id)assetLocalIdentifier;
- (unsigned long long)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deeplink;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endTime;
- (unsigned long long)hash;
- (id)initWithAlbumFeaturedPhoto:(id)arg1 localAlbumIdentifier:(id)arg2 andFeaturedPhotoKeyAsset:(id)arg3 suggestedCrop:(id)arg4;
- (id)initWithFeaturedPhoto:(id)arg1 andFeaturedPhotoKeyAsset:(id)arg2;
- (id)initWithFeaturedPhoto:(id)arg1 andFeaturedPhotoKeyAsset:(id)arg2 suggestedCrop:(id)arg3;
- (id)initWithMemory:(id)arg1 andMemoryKeyAsset:(id)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 localIdentifier:(id)arg3 assetLocalIdentifier:(id)arg4 deeplink:(id)arg5 contentType:(unsigned long long)arg6 sourceIdentifier:(id)arg7 relevanceScore:(double)arg8 proactiveCriterion:(id)arg9 suggestedCrop:(id)arg10 rejectReason:(unsigned long long)arg11;
- (bool)isEqual:(id)arg1;
- (id)localIdentifier;
- (id)proactiveCriterion;
- (unsigned long long)rejectReason;
- (double)relevanceScore;
- (void)setEndTime:(id)arg1;
- (void)setProactiveCriterion:(id)arg1;
- (void)setRejectReason:(unsigned long long)arg1;
- (void)setStartTime:(id)arg1;
- (void)setSuggestedCrop:(id)arg1;
- (id)sourceIdentifier;
- (unsigned long long)sourceType;
- (id)startTime;
- (id)subtitle;
- (id)suggestedCrop;
- (id)title;

@end
