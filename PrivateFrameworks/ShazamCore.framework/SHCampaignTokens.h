
@interface SHCampaignTokens : NSObject {
    NSDictionary * _campaignTokens;
}

@property (nonatomic, readonly) NSDictionary *campaignTokens;

- (void).cxx_destruct;
- (id)campaignTokens;
- (id)initWithConfiguration:(id)arg1;
- (id)tokenForClientIdentifier:(id)arg1;

@end
