
@protocol CompletionGroupTitleProviding <NSObject>

@required

- (NSString *)titleForFindOnPageCompletion:(FindOnPageCompletionItem *)arg1;
- (NSString *)titleForSearchSuggestionsCompletion;

@end
