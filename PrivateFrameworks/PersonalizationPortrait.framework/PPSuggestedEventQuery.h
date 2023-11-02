
@interface PPSuggestedEventQuery : PPEventQuery {
    NSSet * _matchingCategories;
}

@property (nonatomic, retain) NSSet *matchingCategories;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)matchingCategories;
- (void)setMatchingCategories:(id)arg1;

@end
