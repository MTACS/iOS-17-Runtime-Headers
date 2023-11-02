
@interface PLSearchIndexConfiguration : NSObject {
    PLSearchIndexSceneTaxonomyProvider * _sceneTaxonomyProvider;
    PLSpotlightTranslatorConfiguration * _translatorConfiguration;
}

@property (nonatomic, retain) PLSearchIndexSceneTaxonomyProvider *sceneTaxonomyProvider;
@property (nonatomic, retain) PLSpotlightTranslatorConfiguration *translatorConfiguration;

+ (id)calendar;
+ (unsigned long long)featureFlags;
+ (id)locale;

- (void).cxx_destruct;
- (id)sceneTaxonomyProvider;
- (void)setSceneTaxonomyProvider:(id)arg1;
- (void)setTranslatorConfiguration:(id)arg1;
- (id)translatorConfiguration;

@end
