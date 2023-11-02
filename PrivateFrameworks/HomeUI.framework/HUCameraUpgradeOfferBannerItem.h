
@interface HUCameraUpgradeOfferBannerItem : HUBannerItem {
    NSString * _bannerActionText;
    bool  _hasFetchedOfferResults;
    NSString * _offerActionTitle;
    NSString * _offerMessage;
    NSString * _offerTitle;
    NSNumber * _planLimit;
    NSString * _sheetActionText;
    ICQOpportunitySheetDetailsSpecification * _sheetDetails;
    NSString * _sheetMessage;
    NSString * _sheetTitle;
    HFUserItem * _userItem;
}

@property (nonatomic, readonly) NSString *bannerActionText;
@property (nonatomic) bool hasFetchedOfferResults;
@property (nonatomic, retain) NSString *offerActionTitle;
@property (nonatomic, retain) NSString *offerMessage;
@property (nonatomic, retain) NSString *offerTitle;
@property (nonatomic, retain) NSNumber *planLimit;
@property (nonatomic, retain) NSString *sheetActionText;
@property (nonatomic, retain) ICQOpportunitySheetDetailsSpecification *sheetDetails;
@property (nonatomic, retain) NSString *sheetMessage;
@property (nonatomic, retain) NSString *sheetTitle;
@property (nonatomic, retain) HFUserItem *userItem;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)bannerActionText;
- (bool)hasFetchedOfferResults;
- (id)hiddenOfferDisplayOutcome;
- (id)initWithHome:(id)arg1;
- (id)offerActionTitle;
- (id)offerDisplayOutcome;
- (id)offerMessage;
- (id)offerTitle;
- (id)planLimit;
- (void)setHasFetchedOfferResults:(bool)arg1;
- (void)setOfferActionTitle:(id)arg1;
- (void)setOfferMessage:(id)arg1;
- (void)setOfferTitle:(id)arg1;
- (void)setPlanLimit:(id)arg1;
- (void)setSheetActionText:(id)arg1;
- (void)setSheetDetails:(id)arg1;
- (void)setSheetMessage:(id)arg1;
- (void)setSheetTitle:(id)arg1;
- (void)setUserItem:(id)arg1;
- (id)sheetActionText;
- (id)sheetDetails;
- (id)sheetMessage;
- (id)sheetTitle;
- (id)userItem;

@end
