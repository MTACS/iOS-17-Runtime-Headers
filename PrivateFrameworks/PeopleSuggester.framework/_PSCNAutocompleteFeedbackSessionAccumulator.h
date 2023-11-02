
@interface _PSCNAutocompleteFeedbackSessionAccumulator : NSObject {
    _CDInteraction * _interaction;
    _PSCNAutocompleteFeedbackActionStatistics * _metricsForAction;
    NSMutableArray * _metricsForImpressions;
    NSMutableArray * _metricsForSubmodelImpressions;
    NSMutableArray * _vendedSuggestionEvents;
}

@property (nonatomic, readonly) _CDInteraction *interaction;
@property (nonatomic, readonly) _PSCNAutocompleteFeedbackActionStatistics *metricsForAction;
@property (nonatomic, readonly) NSMutableArray *metricsForImpressions;
@property (nonatomic, readonly) NSMutableArray *metricsForSubmodelImpressions;
@property (nonatomic, readonly) NSMutableArray *vendedSuggestionEvents;

+ (id)parseSubmodel:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)interaction;
- (id)metricsForAction;
- (id)metricsForImpressions;
- (id)metricsForSubmodelImpressions;
- (void)updateWithFeedback:(id)arg1;
- (void)updateWithInteraction:(id)arg1;
- (void)updateWithTappedSuggestion:(id)arg1;
- (void)updateWithVendedSuggestions:(id)arg1 reportTime:(id)arg2;
- (id)vendedSuggestionEvents;

@end
