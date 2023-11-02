
@interface PPSocialHighlightFractionalEngagementProvider : NSObject <PPSocialHighlightFeatureProvider> {
    NSMutableDictionary * _engagementsByKey;
    id /* block */  _groupByBlock;
    id /* block */  _keyBlock;
    NSMutableDictionary * _offeredByKey;
}

- (void).cxx_destruct;
- (id)applyFeedback:(id)arg1;
- (id)initWithFeedbackGroupByBlock:(id /* block */)arg1 highlightKeyBlock:(id /* block */)arg2 highlights:(id)arg3;
- (id)valueForHighlight:(id)arg1;

@end
