
@interface ContextualSuggestionClient.WidgetPersonality : NSObject <CHSWidgetPersonality> {
    void extensionBundleIdentifier;
    void kind;
}

@property (nonatomic, readonly) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly) NSString *kind;

- (void).cxx_destruct;
- (id)extensionBundleIdentifier;
- (id)init;
- (id)kind;
- (bool)matchesPersonality:(id)arg1;

@end
