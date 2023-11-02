
@interface FCNewsTabiRecommendedIssuesConfiguration : NSObject {
    FCNewsTabiRecommendedIssuesInputOutputConfiguration * _bundleInputOutputConfiguration;
    FCNewsTabiRecommendedIssuesInputOutputConfiguration * _nonBundleInputOutputConfiguration;
    FCNewsTabiRecommendedIssuesUserContextConfiguration * _userContextConfiguration;
}

@property (nonatomic, retain) FCNewsTabiRecommendedIssuesInputOutputConfiguration *bundleInputOutputConfiguration;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, retain) FCNewsTabiRecommendedIssuesInputOutputConfiguration *nonBundleInputOutputConfiguration;
@property (nonatomic, retain) FCNewsTabiRecommendedIssuesUserContextConfiguration *userContextConfiguration;

- (void).cxx_destruct;
- (id)bundleInputOutputConfiguration;
- (id)description;
- (id)dictionary;
- (id)init;
- (id)initWithBundleInputOutputConfiguration:(id)arg1 nonBundleInputOutputConfiguration:(id)arg2 userContextConfiguration:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)nonBundleInputOutputConfiguration;
- (void)setBundleInputOutputConfiguration:(id)arg1;
- (void)setNonBundleInputOutputConfiguration:(id)arg1;
- (void)setUserContextConfiguration:(id)arg1;
- (id)userContextConfiguration;

@end
