
@interface MRUMediaSuggestionCollectionViewCell : UICollectionViewCell <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate> {
    UIActivityIndicatorView * _activityView;
    UIImage * _artworkImage;
    MRUArtworkView * _artworkView;
    UIImage * _iconImage;
    MRUShadowView * _iconShadowView;
    UIImageView * _iconView;
    long long  _layout;
    MRUVisualStylingProvider * _stylingProvider;
    NSString * _subtitle;
    BSUIEmojiLabelView * _subtitleLabel;
    NSString * _suggestionIdentifier;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityView;
@property (nonatomic, retain) UIImage *artworkImage;
@property (nonatomic, retain) MRUArtworkView *artworkView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, retain) MRUShadowView *iconShadowView;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic) long long layout;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) BSUIEmojiLabelView *subtitleLabel;
@property (nonatomic, copy) NSString *suggestionIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)activityView;
- (id)artworkImage;
- (id)artworkView;
- (id)iconImage;
- (id)iconShadowView;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)layout;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setActivityView:(id)arg1;
- (void)setArtworkImage:(id)arg1;
- (void)setArtworkView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconShadowView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setLayout:(long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSuggestionIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)stylingProvider;
- (id)subtitle;
- (id)subtitleLabel;
- (id)suggestionIdentifier;
- (id)title;
- (id)titleLabel;
- (void)updateContentSizeCategory;
- (void)updateIconView;
- (void)updateVisiblity;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;

@end
