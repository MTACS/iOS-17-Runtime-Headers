
@interface PXSharedAlbumHeaderView : UIView {
    UIImageView * _chevronView;
    UIImage * _headerImage;
    unsigned long long  _headerImageTag;
    UIImageView * _headerImageView;
    bool  _isNew;
    bool  _isObservingLastExitedForYou;
    unsigned long long  _layoutStyle;
    PXFeedSectionInfo * _sectionInfo;
    UILabel * _subtitleLabel;
    unsigned long long  _tappableArea;
    unsigned long long  _textColorStyle;
    UILabel * _titleLabel;
    bool  _useInPopover;
}

@property (nonatomic, retain) UIImageView *chevronView;
@property (nonatomic, retain) UIImage *headerImage;
@property (nonatomic) unsigned long long headerImageTag;
@property (nonatomic, retain) UIImageView *headerImageView;
@property (nonatomic) bool isNew;
@property (nonatomic) bool isObservingLastExitedForYou;
@property (nonatomic) unsigned long long layoutStyle;
@property (nonatomic, retain) PXFeedSectionInfo *sectionInfo;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic) unsigned long long tappableArea;
@property (nonatomic) unsigned long long textColorStyle;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic) bool useInPopover;

+ (void)preloadResources;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_handleHeaderImage:(id)arg1 imageTag:(unsigned long long)arg2;
- (void)_lastExitedForYouDateDidChange:(id)arg1;
- (struct CGSize { double x1; double x2; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 updateSubviewFrames:(bool)arg2;
- (bool)_showChevron;
- (bool)_showSubtitle;
- (void)_updateAvatar:(unsigned long long)arg1;
- (void)_updateBackgroundColor;
- (void)_updateHeaderImage;
- (void)_updateIsNew;
- (void)_updateSubtitle;
- (void)_updateTitle;
- (void)_updateUI;
- (id)chevronView;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)headerImage;
- (unsigned long long)headerImageTag;
- (id)headerImageView;
- (id)init;
- (bool)isNew;
- (bool)isObservingLastExitedForYou;
- (unsigned long long)layoutStyle;
- (void)layoutSubviews;
- (id)sectionInfo;
- (void)setChevronView:(id)arg1;
- (void)setHeaderImage:(id)arg1;
- (void)setHeaderImageTag:(unsigned long long)arg1;
- (void)setHeaderImageView:(id)arg1;
- (void)setIsNew:(bool)arg1;
- (void)setIsObservingLastExitedForYou:(bool)arg1;
- (void)setLayoutStyle:(unsigned long long)arg1;
- (void)setSectionInfo:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTappableArea:(unsigned long long)arg1;
- (void)setTextColorStyle:(unsigned long long)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUseInPopover:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleLabel;
- (unsigned long long)tappableArea;
- (unsigned long long)textColorStyle;
- (id)titleLabel;
- (bool)useInPopover;

@end
