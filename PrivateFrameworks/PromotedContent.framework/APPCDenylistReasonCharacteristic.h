
@interface APPCDenylistReasonCharacteristic : NSObject <APPCPromotableDenylistReasonCharacteristic> {
    void campaignCategories;
    void campaignKeywords;
    void globalCategories;
    void globalKeywords;
}

@property (nonatomic, copy) NSArray *campaignCategories;
@property (nonatomic, copy) NSArray *campaignKeywords;
@property (nonatomic, copy) NSArray *globalCategories;
@property (nonatomic, copy) NSArray *globalKeywords;

- (void).cxx_destruct;
- (id)campaignCategories;
- (id)campaignKeywords;
- (id)globalCategories;
- (id)globalKeywords;
- (id)init;
- (id)initWithGlobalCategories:(id)arg1 globalKeywords:(id)arg2 campaignCategories:(id)arg3 campaignKeywords:(id)arg4;
- (void)setCampaignCategories:(id)arg1;
- (void)setCampaignKeywords:(id)arg1;
- (void)setGlobalCategories:(id)arg1;
- (void)setGlobalKeywords:(id)arg1;

@end
