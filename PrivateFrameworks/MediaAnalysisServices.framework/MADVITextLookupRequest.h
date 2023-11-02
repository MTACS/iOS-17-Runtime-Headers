
@interface MADVITextLookupRequest : MADRequest {
    NSString * _engagementSuggestionType;
    NSString * _hintDomain;
    NSArray * _normalizedBoundingBoxes;
    NSNumber * _queryID;
    NSString * _queryTerm;
    NSString * _surroundingText;
    NSNumber * _uiScale;
}

@property (nonatomic, copy) NSString *engagementSuggestionType;
@property (nonatomic, copy) NSString *hintDomain;
@property (nonatomic, copy) NSArray *normalizedBoundingBoxes;
@property (nonatomic, copy) NSNumber *queryID;
@property (nonatomic, readonly, copy) NSString *queryTerm;
@property (nonatomic, copy) NSString *surroundingText;
@property (nonatomic, copy) NSNumber *uiScale;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)engagementSuggestionType;
- (id)hintDomain;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueryTerm:(id)arg1;
- (id)initWithQueryTerm:(id)arg1 domain:(id)arg2 textContext:(id)arg3;
- (id)normalizedBoundingBoxes;
- (id)queryID;
- (id)queryTerm;
- (void)setEngagementSuggestionType:(id)arg1;
- (void)setHintDomain:(id)arg1;
- (void)setNormalizedBoundingBoxes:(id)arg1;
- (void)setQueryID:(id)arg1;
- (void)setSurroundingText:(id)arg1;
- (void)setUiScale:(id)arg1;
- (id)surroundingText;
- (id)uiScale;

@end
