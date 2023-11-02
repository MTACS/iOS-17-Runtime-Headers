
@interface ContextualSuggestionClient.ContextualWidgetSuggestion : ContextualSuggestionClient.ContextualSuggestion {
    void blendingClientModelSpecification;
    void containerBundleIdentifier;
    void extensionBundleIdentifier;
    void intent;
    void kind;
    void scoreSpecification;
}

@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
