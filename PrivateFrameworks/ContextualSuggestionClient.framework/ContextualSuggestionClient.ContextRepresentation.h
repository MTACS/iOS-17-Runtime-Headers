
@interface ContextualSuggestionClient.ContextRepresentation : NSObject <NSSecureCoding> {
    void identifier;
    void localizedDisplayName;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
