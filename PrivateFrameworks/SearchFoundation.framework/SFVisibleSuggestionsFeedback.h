
@interface SFVisibleSuggestionsFeedback : SFFeedback {
    NSArray * _suggestions;
}

@property (nonatomic, copy) NSArray *suggestions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuggestions:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (id)suggestions;

@end
