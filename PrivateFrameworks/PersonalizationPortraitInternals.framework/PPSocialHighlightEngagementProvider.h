
@interface PPSocialHighlightEngagementProvider : NSObject <PPSocialHighlightFeatureProvider> {
    bool  _acceptOnlyPrimary;
    NSDate * _earliestDateToAccept;
    NSMutableDictionary * _engagementsByKey;
    unsigned long long  _feedbackType;
    id /* block */  _groupByBlock;
    id /* block */  _keyBlock;
}

- (void).cxx_destruct;
- (id)applyFeedback:(id)arg1;
- (id)initWithFeedbackType:(unsigned long long)arg1 feedbackGroupByBlock:(id /* block */)arg2 highlightKeyBlock:(id /* block */)arg3 highlights:(id)arg4;
- (id)initWithFeedbackType:(unsigned long long)arg1 feedbackGroupByBlock:(id /* block */)arg2 highlightKeyBlock:(id /* block */)arg3 intervalSinceNow:(double)arg4 highlights:(id)arg5;
- (id)valueForHighlight:(id)arg1;

@end
