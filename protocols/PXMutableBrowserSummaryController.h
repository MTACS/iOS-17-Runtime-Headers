
@protocol PXMutableBrowserSummaryController <NSObject>

@required

- (unsigned long long)containerDateFormatGranularity;
- (NSDictionary *)defaultAttributes;
- (NSDictionary *)emphasizedAttributes;
- (void)invalidateContainerDateInterval;
- (void)invalidateContainerTitle;
- (void)invalidateFilteringContainerContent;
- (void)invalidateLocalizedContainerItemsCount;
- (void)invalidateSelection;
- (void)invalidateVisibleContent;
- (NSDictionary *)selectionAttributes;
- (void)setContainerDateFormatGranularity:(unsigned long long)arg1;
- (void)setDefaultAttributes:(NSDictionary *)arg1;
- (void)setEmphasizedAttributes:(NSDictionary *)arg1;
- (void)setSelectionAttributes:(NSDictionary *)arg1;
- (void)setShouldShowLocationNames:(bool)arg1;
- (void)setShouldUseAbbreviatedDates:(bool)arg1;
- (void)setShouldUseNavigationTitle:(bool)arg1;
- (void)setShouldUseSubtitles:(bool)arg1;
- (bool)shouldShowLocationNames;
- (bool)shouldUseAbbreviatedDates;
- (bool)shouldUseNavigationTitle;
- (bool)shouldUseSubtitles;

@end
