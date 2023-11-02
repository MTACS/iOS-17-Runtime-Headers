
@interface PUFeedCaptionCell : PUFeedCell {
    unsigned long long  _captionItemIndex;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    bool  _hideCaption;
    PXUIButton * _likeButton;
    PXFeedSectionInfo * _sectionInfo;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic) unsigned long long captionItemIndex;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) bool hideCaption;
@property (nonatomic) bool isLiked;
@property (nonatomic, retain) PXUIButton *likeButton;
@property (nonatomic, readonly) UIImage *likedImage;
@property (nonatomic, readonly) UIImage *notLikedImage;
@property (nonatomic, retain) PXFeedSectionInfo *sectionInfo;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_handleLikeButtonTap:(id)arg1;
- (struct CGSize { double x1; double x2; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 updateSubviewFrames:(bool)arg2;
- (void)_setLikeButtonLiked:(bool)arg1;
- (bool)_shouldHideLikeButton;
- (void)_updateLikeButton;
- (void)_updateSubtitle;
- (void)_updateTitle;
- (void)_updateUI;
- (unsigned long long)captionItemIndex;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void)dealloc;
- (bool)hideCaption;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isLiked;
- (void)layoutSubviews;
- (id)likeButton;
- (id)likedImage;
- (id)notLikedImage;
- (void)prepareForReuse;
- (id)sectionInfo;
- (void)setCaptionItemIndex:(unsigned long long)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHideCaption:(bool)arg1;
- (void)setLikeButton:(id)arg1;
- (void)setSectionInfo:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
