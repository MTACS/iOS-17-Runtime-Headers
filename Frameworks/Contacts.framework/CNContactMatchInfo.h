
@interface CNContactMatchInfo : NSObject <NSCopying, NSSecureCoding> {
    CNPromise * _excerpt;
    bool  _matchedNameProperty;
    NSDictionary * _matchedProperties;
    NSSet * _matchedTerms;
    NSNumber * _relevanceScore;
}

@property (nonatomic, retain) CNPromise *excerpt;
@property (nonatomic) bool matchedNameProperty;
@property (nonatomic, copy) NSDictionary *matchedProperties;
@property (nonatomic, retain) NSSet *matchedTerms;
@property (nonatomic, copy) NSNumber *relevanceScore;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)excerpt;
- (id)initWithCoder:(id)arg1;
- (bool)matchedNameProperty;
- (id)matchedProperties;
- (id)matchedTerms;
- (id)relevanceScore;
- (void)setExcerpt:(id)arg1;
- (void)setMatchedNameProperty:(bool)arg1;
- (void)setMatchedProperties:(id)arg1;
- (void)setMatchedTerms:(id)arg1;
- (void)setRelevanceScore:(id)arg1;

@end
