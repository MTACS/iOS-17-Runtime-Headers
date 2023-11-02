
@protocol PXCMMMutableViewModel <NSObject>

@required

- (bool)containsUnverifiedPersons;
- (NSSet *)disabledActionTypes;
- (NSDate *)endDate;
- (bool)isSelecting;
- (bool)loadingPeopleSuggestions;
- (unsigned long long)numberOfReceivedAssets;
- (NSString *)originalTitle;
- (PXRecipient *)originatorRecipient;
- (long long)photosCount;
- (NSArray *)recipients;
- (long long)selectedCount;
- (long long)selectedPhotosCount;
- (long long)selectedVideosCount;
- (bool)selectionEnabled;
- (PXSectionedSelectionManager *)selectionManager;
- (void)setContainsUnverifiedPersons:(bool)arg1;
- (void)setDisabledActionTypes:(NSSet *)arg1;
- (void)setEndDate:(NSDate *)arg1;
- (void)setLoadingPeopleSuggestions:(bool)arg1;
- (void)setNumberOfReceivedAssets:(unsigned long long)arg1;
- (void)setOriginalTitle:(NSString *)arg1;
- (void)setOriginatorRecipient:(PXRecipient *)arg1;
- (void)setPhotosCount:(long long)arg1;
- (void)setPosterAsset:(id <PXDisplayAsset>)arg1 posterMediaProvider:(id <PXUIImageProvider>)arg2;
- (void)setRecipients:(NSArray *)arg1;
- (void)setSelectedCount:(long long)arg1;
- (void)setSelectedPhotosCount:(long long)arg1;
- (void)setSelectedVideosCount:(long long)arg1;
- (void)setSelecting:(bool)arg1;
- (void)setSelectionEnabled:(bool)arg1;
- (void)setSelectionManager:(PXSectionedSelectionManager *)arg1;
- (void)setShareURL:(NSURL *)arg1;
- (void)setShareUUID:(NSString *)arg1;
- (void)setShouldShowPlaceholder:(bool)arg1;
- (void)setStartDate:(NSDate *)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setTotalCount:(long long)arg1;
- (void)setVideosCount:(long long)arg1;
- (NSURL *)shareURL;
- (NSString *)shareUUID;
- (bool)shouldShowPlaceholder;
- (NSDate *)startDate;
- (NSString *)subtitle;
- (NSString *)title;
- (long long)totalCount;
- (long long)videosCount;

@end
