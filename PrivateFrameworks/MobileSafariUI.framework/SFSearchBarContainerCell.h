
@interface SFSearchBarContainerCell : UICollectionViewCell {
    UISearchBar * _searchBar;
}

@property (nonatomic, retain) UISearchBar *searchBar;

+ (id)dataSourceItemIdentifier;
+ (id)dataSourceSectionIdentifier;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;

@end
