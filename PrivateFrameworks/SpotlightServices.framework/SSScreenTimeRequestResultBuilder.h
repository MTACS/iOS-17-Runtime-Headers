
@interface SSScreenTimeRequestResultBuilder : SSResultBuilder {
    NSArray * _approvers;
    NSDate * _expireDate;
    NSNumber * _requestAmountDuration;
    NSDate * _requestDate;
    NSString * _requestIdentifier;
    int  _requestStatus;
    NSString * _requestStatusString;
    NSString * _requestedItemDescription;
    NSString * _requestedItemName;
    NSString * _requesterContactIdentifier;
    NSNumber * _requesterDSID;
    NSDate * _respondDate;
}

@property (nonatomic, retain) NSArray *approvers;
@property (nonatomic, retain) NSDate *expireDate;
@property (nonatomic, retain) NSNumber *requestAmountDuration;
@property (nonatomic, retain) NSDate *requestDate;
@property (nonatomic, retain) NSString *requestIdentifier;
@property (nonatomic) int requestStatus;
@property (nonatomic, retain) NSString *requestStatusString;
@property (nonatomic, retain) NSString *requestedItemDescription;
@property (nonatomic, retain) NSString *requestedItemName;
@property (nonatomic, retain) NSString *requesterContactIdentifier;
@property (nonatomic, retain) NSNumber *requesterDSID;
@property (nonatomic, retain) NSDate *respondDate;

+ (id)bundleId;

- (void).cxx_destruct;
- (id)approvers;
- (id)buildBadgingImageWithThumbnail:(id)arg1;
- (id)buildButtonItems;
- (bool)buildButtonItemsAreTrailing;
- (id)buildCommand;
- (id)buildDescriptions;
- (id)buildFootnote;
- (id)buildInlineCardSection;
- (id)buildInlineCardSections;
- (id)buildSecondaryTitle;
- (bool)buildSecondaryTitleIsDetached;
- (id)buildThumbnail;
- (id)expireDate;
- (id)initWithResult:(id)arg1;
- (id)requestAmountDuration;
- (id)requestDate;
- (id)requestIdentifier;
- (int)requestStatus;
- (id)requestStatusString;
- (id)requestedItemDescription;
- (id)requestedItemName;
- (id)requesterContactIdentifier;
- (id)requesterDSID;
- (id)respondDate;
- (void)setApprovers:(id)arg1;
- (void)setExpireDate:(id)arg1;
- (void)setRequestAmountDuration:(id)arg1;
- (void)setRequestDate:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setRequestStatus:(int)arg1;
- (void)setRequestStatusString:(id)arg1;
- (void)setRequestedItemDescription:(id)arg1;
- (void)setRequestedItemName:(id)arg1;
- (void)setRequesterContactIdentifier:(id)arg1;
- (void)setRequesterDSID:(id)arg1;
- (void)setRespondDate:(id)arg1;
- (id)subclassBuildHorizontallyScrollingCardSection;

@end
