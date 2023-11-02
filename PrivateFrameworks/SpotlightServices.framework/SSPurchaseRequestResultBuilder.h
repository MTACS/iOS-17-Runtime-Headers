
@interface SSPurchaseRequestResultBuilder : SSResultBuilder {
    NSString * _ageRating;
    NSString * _appName;
    NSString * _appPrice;
    NSString * _appType;
    NSArray * _approvers;
    NSDate * _requestDate;
    NSString * _requestIdentifier;
    int  _requestStatus;
    NSString * _requestStatusString;
    NSString * _requesterContactIdentifier;
    NSString * _requesterName;
    NSDate * _respondDate;
    double  _starRating;
    NSString * _thumbnailAppType;
}

@property (nonatomic, retain) NSString *ageRating;
@property (nonatomic, retain) NSString *appName;
@property (nonatomic, retain) NSString *appPrice;
@property (nonatomic, retain) NSString *appType;
@property (nonatomic, retain) NSArray *approvers;
@property (nonatomic, retain) NSDate *requestDate;
@property (nonatomic, retain) NSString *requestIdentifier;
@property (nonatomic) int requestStatus;
@property (nonatomic, retain) NSString *requestStatusString;
@property (nonatomic, retain) NSString *requesterContactIdentifier;
@property (nonatomic, retain) NSString *requesterName;
@property (nonatomic, retain) NSDate *respondDate;
@property (nonatomic) double starRating;
@property (nonatomic, retain) NSString *thumbnailAppType;

+ (id)bundleId;

- (void).cxx_destruct;
- (id)ageRating;
- (id)appName;
- (id)appPrice;
- (id)appType;
- (id)approvers;
- (id)buildBadgingImageWithThumbnail:(id)arg1;
- (id)buildButtonItems;
- (bool)buildButtonItemsAreTrailing;
- (id)buildCommand;
- (id)buildDescriptions;
- (id)buildFootnote;
- (id)buildInlineCardSection;
- (id)buildSecondaryTitle;
- (bool)buildSecondaryTitleIsDetached;
- (id)buildThumbnail;
- (id)initWithResult:(id)arg1;
- (id)requestDate;
- (id)requestIdentifier;
- (int)requestStatus;
- (id)requestStatusString;
- (id)requesterContactIdentifier;
- (id)requesterName;
- (id)respondDate;
- (void)setAgeRating:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setAppPrice:(id)arg1;
- (void)setAppType:(id)arg1;
- (void)setApprovers:(id)arg1;
- (void)setRequestDate:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setRequestStatus:(int)arg1;
- (void)setRequestStatusString:(id)arg1;
- (void)setRequesterContactIdentifier:(id)arg1;
- (void)setRequesterName:(id)arg1;
- (void)setRespondDate:(id)arg1;
- (void)setStarRating:(double)arg1;
- (void)setThumbnailAppType:(id)arg1;
- (double)starRating;
- (id)subclassBuildHorizontallyScrollingCardSection;
- (id)thumbnailAppType;

@end
