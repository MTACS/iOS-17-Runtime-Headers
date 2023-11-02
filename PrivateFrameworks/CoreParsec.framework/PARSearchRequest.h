
@interface PARSearchRequest : PARRequest <NSSecureCoding> {
    NSArray * _completionCacheSuggestions;
    SFSearchSuggestion * _engagedSuggestion;
    long long  _exp;
    NSString * _l2version;
    NSString * _l3version;
    NSArray * _localContextualSuggestions;
    NSString * _previouslyEngagedQuery;
    NSString * _queryString;
    NSDictionary * _topics;
    long long  _type;
}

@property (nonatomic, retain) NSArray *completionCacheSuggestions;
@property (nonatomic, retain) SFSearchSuggestion *engagedSuggestion;
@property (nonatomic) long long exp;
@property (nonatomic, copy) NSString *l2version;
@property (nonatomic, copy) NSString *l3version;
@property (nonatomic, copy) NSArray *localContextualSuggestions;
@property (nonatomic, copy) NSString *previouslyEngagedQuery;
@property (nonatomic, copy) NSString *queryString;
@property (nonatomic, copy) NSDictionary *topics;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)completionCacheSuggestions;
- (void)encodeWithCoder:(id)arg1;
- (id)engagedSuggestion;
- (long long)exp;
- (id)initWithCoder:(id)arg1;
- (id)l2version;
- (id)l3version;
- (id)localContextualSuggestions;
- (unsigned int)nwActivityLabel;
- (id)previouslyEngagedQuery;
- (id)queryString;
- (void)setCompletionCacheSuggestions:(id)arg1;
- (void)setEngagedSuggestion:(id)arg1;
- (void)setExp:(long long)arg1;
- (void)setL2version:(id)arg1;
- (void)setL3version:(id)arg1;
- (void)setLocalContextualSuggestions:(id)arg1;
- (void)setPreviouslyEngagedQuery:(id)arg1;
- (void)setQueryString:(id)arg1;
- (void)setTopics:(id)arg1;
- (void)setType:(long long)arg1;
- (id)topics;
- (long long)type;

@end
