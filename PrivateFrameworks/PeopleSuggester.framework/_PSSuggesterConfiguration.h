
@interface _PSSuggesterConfiguration : NSObject {
    bool  _excludeBackfillSuggestions;
    long long  _maximumNumberOfSuggestions;
    _PSEnsembleModel * _suggestionModel;
}

@property (nonatomic) bool excludeBackfillSuggestions;
@property (nonatomic) long long maximumNumberOfSuggestions;
@property (nonatomic, retain) _PSEnsembleModel *suggestionModel;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)description;
- (bool)excludeBackfillSuggestions;
- (long long)maximumNumberOfSuggestions;
- (void)setExcludeBackfillSuggestions:(bool)arg1;
- (void)setMaximumNumberOfSuggestions:(long long)arg1;
- (void)setSuggestionModel:(id)arg1;
- (id)suggestionModel;

@end
