
@protocol CPSearchClientTemplateDelegate <CPTemplateDelegate>

@required

- (void)searchTemplateSearchButtonPressedWithIdentifier:(NSUUID *)arg1;
- (void)searchTemplateWithIdentifier:(void *)arg1 selectedResultWithIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: NSUUID *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)searchTemplateWithIdentifier:(void *)arg1 updateSearchResultsForSearchText:(void *)arg2 completionResults:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
