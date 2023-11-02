
@interface PPSocialHighlightTimeSinceEngagementProvider : NSObject <PPSocialHighlightFeatureProvider> {
    NSMutableDictionary * _dates;
    unsigned long long  _feedbackType;
    id /* block */  _groupByBlock;
    id /* block */  _keyBlock;
    bool  _mostRecent;
}

- (void).cxx_destruct;
- (id)applyFeedback:(id)arg1;
- (id)initWithFeedbackType:(unsigned long long)arg1 feedbackGroupByBlock:(id /* block */)arg2 highlightKeyBlock:(id /* block */)arg3 mostRecent:(bool)arg4 highlights:(id)arg5;
- (id)valueForHighlight:(id)arg1;

@end
