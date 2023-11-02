
@interface ContextualSuggestionClient.ContextualSuggestionContext : NSObject <NSSecureCoding> {
    void representation;
    void suggestions;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
