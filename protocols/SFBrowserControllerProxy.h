
@protocol SFBrowserControllerProxy <NSObject>

@required

- (bool)activeTabIsBlank;
- (bool)areCustomTabGroupsEnabled;
- (bool)canCloseActiveTab;
- (bool)canCloseTab;
- (bool)canCreateNewBookmark;
- (bool)canCreateNewPrivateTab;
- (bool)canCreateNewTab;
- (bool)canCreateReadingListItem;
- (bool)canNavigateContinuousReadingListInDirection:(unsigned long long)arg1;
- (bool)canToggleVisibilityForView:(unsigned long long)arg1;
- (bool)dismissTransientUIAnimated:(bool)arg1;
- (bool)isPrivateBrowsingAvailable;
- (bool)isReaderAvailable;
- (bool)isShowingContinuousReadingList;
- (bool)isShowingReader;
- (bool)isViewVisible:(unsigned long long)arg1;
- (void)prepareIntentInteractionWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
