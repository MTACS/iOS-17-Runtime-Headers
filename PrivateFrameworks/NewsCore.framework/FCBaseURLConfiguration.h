
@interface FCBaseURLConfiguration : NSObject {
    <FCCoreConfiguration> * _coreConfiguration;
}

@property (nonatomic, retain) <FCCoreConfiguration> *coreConfiguration;

+ (id)CAPIBaseURLForConfiguration:(id)arg1;
+ (id)appAnalyticsSportsEventsBaseURLForConfiguration:(id)arg1;
+ (id)authTokenBaseURLForConfiguration:(id)arg1;
+ (id)ckEdgeCachedMultiFetchBaseURLForConfiguration:(id)arg1;
+ (id)ckEdgeCachedOrderFeedBaseURLForConfiguration:(id)arg1;
+ (id)ckMultiFetchBaseURLForConfiguration:(id)arg1;
+ (id)ckOrderFeedBaseURLForConfiguration:(id)arg1;
+ (id)ckRecordFetchBaseURLForConfiguration:(id)arg1;
+ (id)fairPlayBaseURLForConfiguration:(id)arg1;
+ (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration:(id)arg1;
+ (bool)hasOverrideCAPIURL;
+ (id)newsletterBaseURLForConfiguration:(id)arg1;
+ (id)notificationsBaseURLForConfiguration:(id)arg1;
+ (id)overrideCAPIURLString;
+ (id)searchBaseURLForConfiguration:(id)arg1;
+ (id)sportsDataVisualizationBaseURLForConfiguration:(id)arg1;

- (void).cxx_destruct;
- (id)CAPIBaseURL;
- (id)appAnalyticsSportsEventsBaseURLForConfiguration;
- (id)authTokenBaseURLForConfiguration;
- (id)baseURL:(id /* block */)arg1 fallback:(int (*)arg2;
- (id)baseURLString:(id /* block */)arg1 fallback:(int (*)arg2;
- (id)ckEdgeCachedMultiFetchBaseURLForConfiguration;
- (id)ckEdgeCachedOrderFeedBaseURLForConfiguration;
- (id)ckMultiFetchBaseURLForConfiguration;
- (id)ckOrderFeedBaseURLForConfiguration;
- (id)ckRecordFetchBaseURLForConfiguration;
- (id)coreConfiguration;
- (id)fairPlayBaseURL;
- (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration;
- (id)initWithCoreConfiguration:(id)arg1;
- (id)newsletterBaseURL;
- (id)notificationsBaseURL;
- (id)searchBaseURLForConfiguration;
- (void)setCoreConfiguration:(id)arg1;
- (id)sportsDataVisualizationBaseURLForConfiguration;

@end
