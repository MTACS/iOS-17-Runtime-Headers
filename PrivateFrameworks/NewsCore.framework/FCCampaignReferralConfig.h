
@interface FCCampaignReferralConfig : NSObject {
    NSArray * _autoFavoriteTagIDs;
    NSString * _campaignID;
}

@property (nonatomic, copy) NSArray *autoFavoriteTagIDs;
@property (nonatomic, copy) NSString *campaignID;

- (void).cxx_destruct;
- (id)autoFavoriteTagIDs;
- (id)campaignID;
- (id)initWithCampaignID:(id)arg1 configDictionary:(id)arg2;
- (void)setAutoFavoriteTagIDs:(id)arg1;
- (void)setCampaignID:(id)arg1;

@end
