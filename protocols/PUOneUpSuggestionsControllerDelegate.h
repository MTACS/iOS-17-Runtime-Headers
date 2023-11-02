
@protocol PUOneUpSuggestionsControllerDelegate <NSObject>

@optional

- (bool)oneUpSuggestionsController:(PUOneUpSuggestionsController *)arg1 canShowSuggestionForAssetReference:(PUAssetReference *)arg2;
- (void)suggestionBecameAvailable:(PUOneUpSuggestionsController *)arg1;

@end
