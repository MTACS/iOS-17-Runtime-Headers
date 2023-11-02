
@protocol TabDocumentNavigationObserving <NSObject>

@optional

- (void)tabDocumentDidBeginNavigationGesture:(TabDocument *)arg1;
- (void)tabDocumentDidCommitNavigation:(TabDocument *)arg1;
- (void)tabDocumentDidEndNavigationGesture:(TabDocument *)arg1 withNavigationToBackForwardListItem:(WKBackForwardListItem *)arg2;
- (void)tabDocumentWillEndNavigationGesture:(TabDocument *)arg1 withNavigationToBackForwardListItem:(WKBackForwardListItem *)arg2;

@end
