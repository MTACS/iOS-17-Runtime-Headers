
@interface _PSSiriHandleRankerPredictionContext : NSObject <NSSecureCoding> {
    NSArray * _bundleIds;
    long long  _domain;
    NSDate * _suggestionDate;
}

@property (nonatomic, copy) NSArray *bundleIds;
@property long long domain;
@property (nonatomic, copy) NSDate *suggestionDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIds;
- (long long)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBundleIds:(id)arg1;
- (void)setDomain:(long long)arg1;
- (void)setSuggestionDate:(id)arg1;
- (id)suggestionDate;

@end
