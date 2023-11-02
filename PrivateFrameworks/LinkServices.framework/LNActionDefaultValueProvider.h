
@interface LNActionDefaultValueProvider : NSObject {
    LNFullyQualifiedActionIdentifier * _actionIdentifier;
    LNActionMetadata * _actionMetadata;
}

@property (nonatomic, readonly) LNFullyQualifiedActionIdentifier *actionIdentifier;
@property (nonatomic, retain) LNActionMetadata *actionMetadata;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionMetadata;
- (id)initWithActionIdentifier:(id)arg1 actionMetadata:(id)arg2;
- (id)loadActionMetadataWithError:(id*)arg1;
- (void)loadDefaultValuesWithCompletionHandler:(id /* block */)arg1;
- (id)loadStaticDefaultValueForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (void)loadSuggestedFocusActionsWithSuggestionContext:(id)arg1 completion:(id /* block */)arg2;
- (void)setActionMetadata:(id)arg1;

@end
