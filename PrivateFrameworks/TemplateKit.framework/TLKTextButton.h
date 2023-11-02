
@interface TLKTextButton : UIButton {
    long long  _alignment;
    bool  _attributedTitleExplicitlySet;
    bool  _matchesHeightForAlignmentRectWithIntrinsicContentSize;
    unsigned long long  _prominence;
    TLKRichText * _richTitle;
    NSString * _title;
    TLKImage * _tlkImage;
    TLKImageView * _tlkImageView;
}

@property (nonatomic) long long alignment;
@property (nonatomic) bool alwaysShowPlaceholderView;
@property bool attributedTitleExplicitlySet;
@property (nonatomic, retain) UIFont *font;
@property bool matchesHeightForAlignmentRectWithIntrinsicContentSize;
@property (nonatomic) unsigned long long prominence;
@property (nonatomic, copy) TLKRichText *richTitle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) TLKImage *tlkImage;
@property (nonatomic, retain) TLKImageView *tlkImageView;

- (void).cxx_destruct;
- (long long)alignment;
- (bool)allowsVibrancy;
- (bool)alwaysShowPlaceholderView;
- (bool)attributedTitleExplicitlySet;
- (void)didMoveToWindow;
- (id)font;
- (bool)hasTemplateUIImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isImageMode;
- (void)layoutSubviews;
- (void)matchHeightForAlignmentRectWithIntrinsicContentSizeIfNecessary;
- (bool)matchesHeightForAlignmentRectWithIntrinsicContentSize;
- (struct CGSize { double x1; double x2; })maximumLayoutSize;
- (struct CGSize { double x1; double x2; })minimumLayoutSize;
- (unsigned long long)prominence;
- (id)richTitle;
- (void)setAlignment:(long long)arg1;
- (void)setAlwaysShowPlaceholderView:(bool)arg1;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setAttributedTitleExplicitlySet:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMatchesHeightForAlignmentRectWithIntrinsicContentSize:(bool)arg1;
- (void)setMaximumLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setProminence:(unsigned long long)arg1;
- (void)setRichTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTlkImage:(id)arg1;
- (void)setTlkImageView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (id)tlkImage;
- (id)tlkImageView;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAttributedTitle;

@end
