
@interface ATXAnchorModelFeedbackMetadata : NSObject <NSSecureCoding> {
    NSMutableDictionary * _suggestionUUIDToAnchorPredictionMapping;
}

+ (id)anchorFeedbackMetadataFromArchivedData:(id)arg1;
+ (id)archivedDataForAnchorFeedbackMetadata:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchorModelPredictionForProactiveSuggestion:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAnchorSuggestionTuples:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuggestionUUIDToAnchorPredictionMapping:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXAnchorModelFeedbackMetadata:(id)arg1;
- (unsigned long long)numberOfAnchorModelPredictions;

@end
