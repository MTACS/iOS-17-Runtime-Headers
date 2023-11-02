
@interface WBSSiriIntelligenceDonor : NSObject {
    NSObject<OS_dispatch_queue> * _coreSpotlightDonationSerialQueue;
    NSMutableSet * _identifiersLeftToReindex;
}

+ (id)_bookmarkItemIdentifierForURLString:(id)arg1;
+ (id)_coreSpotlightItemIdentifierForURLString:(id)arg1;
+ (id)_historyItemIdentifierForURLString:(id)arg1;
+ (id)coreSpotlightPageDonationIdentifierForProfileWithIdentifier:(id)arg1;
+ (id)historyItemIdentifierForURL:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_computeCoreSpotlightIDsForBookmarks:(id)arg1;
- (void)_computeCoreSpotlightIndexingRequirementsForAllBookmarksIDs:(id)arg1 indexedBookmarksIDs:(id)arg2 outIndexIDs:(id*)arg3 outRemoveIDs:(id*)arg4;
- (id)_contentDescriptionForURL:(id)arg1;
- (id)_coreSpotlightItemsSubarrays:(id)arg1;
- (void)_donateDataForPageWithURL:(id)arg1 history:(id)arg2 fullPageText:(id)arg3 readerText:(id)arg4 autocompleteTriggers:(id)arg5 profileIdentifier:(id)arg6 personalizationData:(id)arg7;
- (void)_donateHistoryItemsToCoreSpotlightCreatedAfterDate:(id)arg1 beforeDate:(id)arg2 historiesForProfiles:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)_indexCoreSpotlightData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_indexHistoryItemsToCoreSpotlight:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_indexedBookmarksIDs:(id*)arg1;
- (void)_removeCoreSpotlightDataWithIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_sanitizeAttributeSet:(id)arg1;
- (id)_searchableItemsForIDs:(id)arg1 allBookmarks:(id)arg2;
- (void)donateAllHistoryToCoreSpotlightForProfiles:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)donateDataForPageWithURL:(id)arg1 fullPageText:(id)arg2 readerText:(id)arg3 profileIdentifier:(id)arg4 personalizationData:(id)arg5;
- (void)donateSafariBookmarksToCoreSpotlight:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)donateTextInWebView:(id)arg1 extractedReaderText:(id)arg2 canDonateFullPageText:(bool)arg3 profileIdentifier:(id)arg4 personalizationData:(id)arg5 extractInnerText:(id /* block */)arg6;
- (void)export30DaysWorthOfHistoryToCoreSpotlightForProfiles:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)processRemovedHistoryItems:(id)arg1;
- (void)reindexAllBookmarkAndHistoryItems:(id)arg1 historiesForProfiles:(id)arg2 withAcknowledgementHandler:(id /* block */)arg3;
- (void)reindexBookmarkAndHistoryItemsWithIdentifiers:(id)arg1 allBookmarks:(id)arg2 historiesForProfiles:(id)arg3 withAcknowledgementHandler:(id /* block */)arg4;
- (void)removeAllCoreSpotlightHistoryDataDonatedBySafariForProfileWithIdentifier:(id)arg1;

@end
