
@protocol _MKPlaceCardRefreshable <NSObject>

@required

- (double)headerSecondaryNameLabelPadding;
- (unsigned long long)options;
- (bool)placeInBookmarks;
- (bool)placeInCollections;
- (bool)placeInShortcuts;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPlaceInBookmarks:(bool)arg1;
- (void)setPlaceInCollections:(bool)arg1;
- (void)setPlaceInShortcuts:(bool)arg1;
- (void)setPlaceItem:(id <_MKPlaceItem>)arg1 updateOriginalContact:(bool)arg2;
- (void)updateHeaderTitle;

@end
