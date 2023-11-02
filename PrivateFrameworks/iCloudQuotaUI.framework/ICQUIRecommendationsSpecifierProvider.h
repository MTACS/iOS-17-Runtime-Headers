
@interface ICQUIRecommendationsSpecifierProvider : NSObject <AAUISpecifierProvider, iCloudQuotaUI.RecommendationSubtitleControllerDelegate> {
    AIDAAccountManager * _accountManager;
    <AAUISpecifierProviderDelegate> * _delegate;
    _TtC13iCloudQuotaUI29RecommendationAnalyticsHelper * _recommendationAnalyticsHelper;
    _TtC13iCloudQuotaUI25RecommendationsController * _recommendationsController;
    PSSpecifier * _recommendationsSpecifier;
    NSString * _recommendedForYouSubtitle;
    NSString * _recommendedForYouTitle;
    NSArray * _specifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *specifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_handleRecommendationsURL:(id)arg1;
- (void)_openRecommendationsViewController:(id)arg1;
- (void)_reloadSpecifiers;
- (id)account;
- (id)delegate;
- (bool)handleURL:(id)arg1;
- (id)initWithAccountManager:(id)arg1;
- (void)recommendationsChangedWithTitle:(id)arg1 subtitle:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (id)specifiers;

@end
