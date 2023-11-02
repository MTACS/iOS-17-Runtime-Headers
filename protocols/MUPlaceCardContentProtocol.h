
@protocol MUPlaceCardContentProtocol <MUInfoCardContentProtocol>

@required

- (NSArray *)createMenuActions;
- (NSArray *)createShareSheetFooterActions;
- (UILayoutGuide *)headerViewTitleLabelToTopLayoutGuide;
- (MKLookAroundView *)lookAroundView;
- (MUFeatureDiscoveryAnnotationView *)offlineFeatureDiscoveryView;
- (<MUOfflineMapProvider> *)offlineMapProvider;
- (void)performAction:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: MKPlaceCardActionItem *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performShareActionWithPresentationOptions:(MUPresentationOptions *)arg1;
- (bool)placeInBookmarks;
- (bool)placeInCollections;
- (bool)placeInShortcuts;
- (unsigned long long)placeNumberOfReportsInReview;
- (void)setOfflineFeatureDiscoveryView:(MUFeatureDiscoveryAnnotationView *)arg1;
- (void)setOfflineMapProvider:(id <MUOfflineMapProvider>)arg1;
- (void)setPlaceInBookmarks:(bool)arg1;
- (void)setPlaceInCollections:(bool)arg1;
- (void)setPlaceInShortcuts:(bool)arg1;
- (void)setPlaceNumberOfReportsInReview:(unsigned long long)arg1;
- (void)setVerifiedHeaderExpansionProgress:(double)arg1;
- (bool)shouldBlurChromeHeaderButtons;
- (void)updateActionRowView;
- (void)updateCollectionViewsAnimated:(bool)arg1;
- (void)updateCuratedCollectionsView;
- (void)updatePlaceEnrichment;
- (void)updatePlaceInfo;
- (void)updateSuggestionView;
- (void)updateUserSubmissionWithPhotoURL:(NSURL *)arg1 photoID:(NSString *)arg2 numberOfPhotos:(long long)arg3;
- (void)updateViewsWithSubmissionStatus:(MUPlaceCallToActionAppearance *)arg1 animated:(bool)arg2;
- (double)verifiedHeaderExpansionProgress;

@end
