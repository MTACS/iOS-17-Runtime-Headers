
@protocol _UICollectionTableIndexOverlayHost <NSObject>

@required

- (NSArray *)_dataSourceSectionIndexTitles;
- (void)_hideIndexOverlay;
- (void)_recomputeSectionIndexTitleIndex;
- (long long)_sectionIndexChangedToIndex:(long long)arg1 title:(NSString *)arg2;
- (void)_shiftSectionIndexTitleIndexByAmount:(long long)arg1;
- (void)_transitionIndexOverlaySelectionViewToVisible:(bool)arg1;

@end
