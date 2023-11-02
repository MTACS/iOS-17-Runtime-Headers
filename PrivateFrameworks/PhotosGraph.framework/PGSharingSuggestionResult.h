
@interface PGSharingSuggestionResult : NSObject {
    <PGPersonResult> * _person;
    NSArray * _sourceNames;
    double  _sourceWeight;
    bool  _useContactSuggestion;
    double  _weight;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) <PGPersonResult> *person;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) NSArray *sourceNames;
@property (nonatomic, readonly) double sourceWeight;
@property (nonatomic) bool useContactSuggestion;
@property (nonatomic, readonly) double weight;

+ (id)suggestionResultWithPerson:(id)arg1 weight:(double)arg2 sourceWeight:(double)arg3 sourceName:(id)arg4;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithPerson:(id)arg1 weight:(double)arg2 sourceWeight:(double)arg3 sourceName:(id)arg4;
- (void)mergeWithSuggestionResult:(id)arg1;
- (id)person;
- (double)score;
- (void)setUseContactSuggestion:(bool)arg1;
- (id)sourceNames;
- (double)sourceWeight;
- (bool)useContactSuggestion;
- (double)weight;

@end
