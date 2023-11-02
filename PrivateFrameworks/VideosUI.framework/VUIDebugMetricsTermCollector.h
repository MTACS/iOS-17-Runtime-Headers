
@interface VUIDebugMetricsTermCollector : NSObject <VUIDebugMetricsTermCollector>

@property (nonatomic, readonly) NSArray *baseTerms;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *filteredTerms;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *metricsKitTerms;
@property (nonatomic, readonly) NSDictionary *primaryTerms;
@property (readonly) Class superclass;

- (id)accountTerms;
- (id)baseTerms;
- (id)clickTerms;
- (id)dialogTerms;
- (id)enterTerms;
- (id)exitTerms;
- (id)filteredTerms;
- (id)impressionsTerms;
- (id)metricsKitTerms;
- (id)pageRenderTerms;
- (id)pageTerms;
- (id)primaryTerms;
- (id)searchTerms;

@end
