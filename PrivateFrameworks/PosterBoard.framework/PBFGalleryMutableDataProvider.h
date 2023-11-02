
@interface PBFGalleryMutableDataProvider : PBFPosterGalleryDataProvider

- (bool)_isSectionIdentifierValid:(id)arg1;
- (bool)_isSectionTypeValid:(long long)arg1;
- (bool)_isValidItem:(id)arg1 withinSectionIdentifier:(id)arg2;
- (void)addSectionWithIdentifier:(id)arg1 localizedTitle:(id)arg2 type:(long long)arg3 items:(id)arg4;
- (void)addToSection:(id)arg1 item:(id)arg2;
- (void)configureForGallery:(id)arg1;
- (void)executeBulkUpdate:(id /* block */)arg1;
- (void)insertSectionWithIdentifier:(id)arg1 toIndex:(unsigned long long)arg2 localizedTitle:(id)arg3 localizedSubtitle:(id)arg4 type:(long long)arg5 items:(id)arg6;
- (void)removeFromSection:(id)arg1 item:(id)arg2;
- (void)removeSectionWithIdentifier:(id)arg1;
- (void)setItems:(id)arg1 forSectionIdentifier:(id)arg2;
- (void)sortItemsWithinSectionAtIdentifier:(id)arg1 comparator:(id /* block */)arg2;
- (void)sortSectionsWithComparator:(id /* block */)arg1;

@end
