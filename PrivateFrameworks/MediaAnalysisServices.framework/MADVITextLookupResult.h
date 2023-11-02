
@interface MADVITextLookupResult : MADResult {
    NSArray * _searchSections;
}

@property (nonatomic, readonly) NSArray *searchSections;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchSections:(id)arg1;
- (id)searchSections;

@end
