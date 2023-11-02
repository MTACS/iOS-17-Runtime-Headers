
@interface FCPersonalizationFunctionProvider : NSObject <FCPersonalizationFunctionProviding> {
    double  _articleDiversificationSimilarityExpectationEnd;
    double  _articleDiversificationSimilarityExpectationStart;
    double  _articleDiversificationUniquePublisherExpectationSlope;
    double  _articleDiversificationUniquePublisherExpectationYIntercept;
}

@property (nonatomic) double articleDiversificationSimilarityExpectationEnd;
@property (nonatomic) double articleDiversificationSimilarityExpectationStart;
@property (nonatomic) double articleDiversificationUniquePublisherExpectationSlope;
@property (nonatomic) double articleDiversificationUniquePublisherExpectationYIntercept;

- (double)articleDiversificationSimilarityExpectationEnd;
- (double)articleDiversificationSimilarityExpectationStart;
- (double)articleDiversificationUniquePublisherExpectationSlope;
- (double)articleDiversificationUniquePublisherExpectationYIntercept;
- (id)diversifyItems:(id)arg1 limit:(unsigned long long)arg2;
- (id)diversifyItems:(id)arg1 limit:(unsigned long long)arg2 preselectedItems:(id)arg3;
- (id)init;
- (id)initWithAppConfiguration:(id)arg1;
- (void)setArticleDiversificationSimilarityExpectationEnd:(double)arg1;
- (void)setArticleDiversificationSimilarityExpectationStart:(double)arg1;
- (void)setArticleDiversificationUniquePublisherExpectationSlope:(double)arg1;
- (void)setArticleDiversificationUniquePublisherExpectationYIntercept:(double)arg1;

@end
