
@interface SPSearchSuggestionEntity : SPSearchEntity {
    NSString * _spotlightQueryString;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchString:(id)arg1 spotlightQueryString:(id)arg2 preferredBundleIDs:(id)arg3;
- (id)queryString;
- (id)spotlightQueryString;

@end
