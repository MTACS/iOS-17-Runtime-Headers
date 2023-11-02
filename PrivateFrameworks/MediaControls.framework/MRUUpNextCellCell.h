
@interface MRUUpNextCellCell : UITableViewCell {
    MPArtworkCatalog * _artworkCatalog;
    UIImageView * _artworkView;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) MPArtworkCatalog *artworkCatalog;
@property (nonatomic, retain) UIImageView *artworkView;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)artworkCatalog;
- (id)artworkView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setArtworkCatalog:(id)arg1;
- (void)setArtworkView:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
