
@interface PXInboxTableViewCell : UITableViewCell {
    PXRoundedCornerOverlayView * _cornerOverlayView;
    PXInboxTableViewCellLayoutCoordinator * _layoutCoordinator;
    <PXInboxModel> * _model;
    UIImageView * _placeholderImageView;
    UILabel * _subtitleLabel;
    PXBadgedThumbnailView * _thumbnailView;
    NSAttributedString * _title;
    UILabel * _titleLabel;
    bool  _unseen;
}

@property (nonatomic, retain) PXRoundedCornerOverlayView *cornerOverlayView;
@property (nonatomic, retain) PXInboxTableViewCellLayoutCoordinator *layoutCoordinator;
@property (nonatomic, copy) <PXInboxModel> *model;
@property (nonatomic, retain) UIImageView *placeholderImageView;
@property (nonatomic, retain) NSAttributedString *subtitle;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) PXBadgedThumbnailView *thumbnailView;
@property (nonatomic, retain) NSAttributedString *title;
@property (nonatomic, retain) UILabel *titleLabel;
@property (getter=isUnseen, nonatomic) bool unseen;

+ (id)emptyPlaceholderImageForSystemImageNamed:(id)arg1 scale:(long long)arg2;
+ (id)placeholderEmptyImage;
+ (void)preloadResources;
+ (id)thumbnailBadgeImageForTintColor:(id)arg1;
+ (id)unseenHighlightColor;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateTitle;
- (void)_updateTitleLabel;
- (id)cornerOverlayView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isUnseen;
- (id)layoutCoordinator;
- (void)layoutSubviews;
- (id)model;
- (id)placeholderImageView;
- (void)prepareForReuse;
- (void)setCornerOverlayView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayoutCoordinator:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setPlaceholderImageView:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setThumbnailView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUnseen:(bool)arg1;
- (id)subtitle;
- (id)subtitleLabel;
- (id)thumbnailView;
- (id)title;
- (id)titleLabel;

@end
