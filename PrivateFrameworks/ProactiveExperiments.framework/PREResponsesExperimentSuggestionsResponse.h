
@interface PREResponsesExperimentSuggestionsResponse : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _suggestions;
}

@property (nonatomic, readonly) NSArray *suggestions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuggestions:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)suggestions;

@end
