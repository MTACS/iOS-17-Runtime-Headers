
@protocol MRMediaSuggestionControllerDelegate <NSObject>

@required

- (void)controller:(MRMediaSuggestionController *)arg1 didFailWithError:(NSError *)arg2;
- (void)controller:(MRMediaSuggestionController *)arg1 didUpdateSuggestions:(NSDictionary *)arg2;

@end
