
@interface PKDiscoveryArticleLayoutCell : UICollectionViewCell {
    PKDiscoveryShelfView * _shelfView;
}

@property (nonatomic, retain) PKDiscoveryShelfView *shelfView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)setShelfView:(id)arg1;
- (id)shelfView;

@end
