
@interface TPSSearchQuery : NSObject <NSSecureCoding> {
    void contentTypeFilter;
    void identifier;
    void isCancelled;
    void matchingStyle;
    void maxCount;
    void options;
    void rankingModifier;
    void searchTerm;
}

@property (nonatomic) long long contentTypeFilter;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isCancelled;
@property (nonatomic) long long matchingStyle;
@property (nonatomic) long long maxCount;
@property (nonatomic) unsigned long long options;
@property (nonatomic, copy) id /* block */ rankingModifier;
@property (nonatomic, copy) NSString *searchTerm;

+ (id)escapeSearchTerm:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)contentTypeFilter;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 searchTerm:(id)arg2;
- (id)initWithIdentifier:(id)arg1 searchTerm:(id)arg2 options:(unsigned long long)arg3 matchingStyle:(long long)arg4 contentTypeFilter:(long long)arg5;
- (bool)isCancelled;
- (bool)isEqual:(id)arg1;
- (id)makeCSQueryWith:(id)arg1;
- (long long)matchingStyle;
- (long long)maxCount;
- (unsigned long long)options;
- (id /* block */)rankingModifier;
- (id)searchTerm;
- (void)setContentTypeFilter:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsCancelled:(bool)arg1;
- (void)setMatchingStyle:(long long)arg1;
- (void)setMaxCount:(long long)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setRankingModifier:(id /* block */)arg1;
- (void)setSearchTerm:(id)arg1;

@end
