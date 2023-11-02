
@interface PXBadgedThumbnailView : UIView {
    UIImage * _badgeImage;
    UIImageView * _badgeView;
    PXCollageView * _collageView;
    UIImageView * _placeholderImageView;
    bool  _showBadge;
}

@property (nonatomic, retain) UIImage *badgeImage;
@property (nonatomic, retain) UIImageView *badgeView;
@property (nonatomic, retain) PXCollageView *collageView;
@property (nonatomic) long long numberOfItems;
@property (nonatomic, retain) UIImageView *placeholderImageView;
@property (getter=shouldShowLikeBadge, nonatomic) bool showBadge;

- (void).cxx_destruct;
- (id)badgeImage;
- (id)badgeView;
- (id)collageView;
- (id)imageViewForItemAtIndex:(unsigned long long)arg1;
- (id)initWithplaceholderImageView:(id)arg1;
- (void)layoutSubviews;
- (long long)numberOfItems;
- (id)placeholderImageView;
- (void)setBadgeImage:(id)arg1;
- (void)setBadgeView:(id)arg1;
- (void)setCollageView:(id)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(unsigned long long)arg2;
- (void)setImageHidden:(bool)arg1 forItemAtIndex:(unsigned long long)arg2;
- (void)setNumberOfItems:(long long)arg1;
- (void)setPlaceholderImageView:(id)arg1;
- (void)setShowBadge:(bool)arg1;
- (bool)shouldShowBadge;
- (bool)shouldShowLikeBadge;

@end
