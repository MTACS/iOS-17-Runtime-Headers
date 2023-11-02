
@protocol PXSharedLibrarySharingSuggestionsDataSourceDelegate <NSObject>

@required

- (PXSharedLibrarySharingSuggestionPromise *)dataSource:(PXSharedLibrarySharingSuggestionsDataSource *)arg1 promiseForContainer:(id <_PXSharedLibrarySharingSuggestionContainer>)arg2;

@end
