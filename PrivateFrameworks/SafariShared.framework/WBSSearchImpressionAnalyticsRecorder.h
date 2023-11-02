
@interface WBSSearchImpressionAnalyticsRecorder : NSObject {
    WBSSearchProvider * _defaultSearchProvider;
    NSArray * _searchProviders;
}

@property (nonatomic, retain) WBSSearchProvider *defaultSearchProvider;
@property (nonatomic, copy) NSArray *searchProviders;

+ (id)sharedRecorder;

- (void).cxx_destruct;
- (id)defaultSearchProvider;
- (void)didActualizeImpressionForURL:(id)arg1 provenance:(long long)arg2;
- (id)init;
- (id)searchProviderForURL:(id)arg1;
- (id)searchProviders;
- (void)setDefaultSearchProvider:(id)arg1;
- (void)setSearchProviders:(id)arg1;

@end
