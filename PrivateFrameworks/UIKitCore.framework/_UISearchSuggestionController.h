
@interface _UISearchSuggestionController : NSObject {
    <_UISearchSuggestionControllerDelegate> * _delegate;
    NSArray * _suggestionGroups;
    NSArray * _suggestions;
}

@property (nonatomic) <_UISearchSuggestionControllerDelegate> *delegate;
@property (nonatomic, copy) NSArray *suggestionGroups;
@property (nonatomic, copy) NSArray *suggestions;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setSuggestionGroups:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (id)suggestionGroups;
- (id)suggestions;
- (void)updateSuggestionGroups:(id)arg1 userInitiated:(bool)arg2;
- (void)updateSuggestions:(id)arg1 userInitiated:(bool)arg2;

@end
