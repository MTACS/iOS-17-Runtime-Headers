
@interface ATXSpotlightSuggestionProvider : NSObject {
    void delegate;
    void suggestions;
}

@property (nonatomic) <ATXSpotlightSuggestionProviderDelegate> *delegate;
@property (nonatomic, retain) ATXSpotlightSuggestions *suggestions;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (id)suggestions;

@end
