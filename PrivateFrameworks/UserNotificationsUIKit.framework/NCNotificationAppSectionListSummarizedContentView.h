
@interface NCNotificationAppSectionListSummarizedContentView : NCNotificationListBaseContentView {
    UIView * _attachmentImageBoundingView;
    NSArray * _attachmentImageViews;
    UIView * _backgroundView;
    unsigned long long  _count;
    UIView * _countBackgroundView;
    UILabel * _countLabel;
    <NCNotificationAppSectionListSummarizedContentViewDelegate> * _delegate;
    UITapGestureRecognizer * _tapGestureRecognizer;
    NSArray * _titleAndContentStringLabels;
    NSArray * _titleAndContentStrings;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSArray *attachmentImageViews;
@property (nonatomic) unsigned long long count;
@property (nonatomic) <NCNotificationAppSectionListSummarizedContentViewDelegate> *delegate;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *titleAndContentStrings;

- (void).cxx_destruct;
- (double)_allowedWidthForTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_configureBackgroundViewIfNecessary;
- (void)_configureShadowForAttachmentView:(id)arg1;
- (void)_configureTapGestureRecognizerIfNecessary;
- (double)_countBackgroundDimensionInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_layoutAttachmentImageViews;
- (void)_layoutBackgroundView;
- (void)_layoutCountLabel;
- (void)_layoutTitleAndContentStringLabels;
- (void)_layoutTitleLabel;
- (unsigned long long)_maximumNumberOfLinesForContentText;
- (unsigned long long)_maximumNumberOfLinesForTitleText;
- (id)_newContentStringLabelForText:(id)arg1;
- (unsigned long long)_numberOfLinesForContentTextInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)_numberOfLinesForTitleTextInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateTextAttributes;
- (void)_updateTextAttributesForCountLabel;
- (void)_updateTextAttributesForTitleAndContentStringLabels;
- (void)_updateTextAttributesForTitleLabel;
- (void)_visualStylingProviderDidChange:(id)arg1 forCategory:(long long)arg2 outgoingProvider:(id)arg3;
- (id)attachmentImageViews;
- (unsigned long long)count;
- (id)delegate;
- (void)didMoveToWindow;
- (void)handleTap:(id)arg1;
- (void)layoutSubviews;
- (void)setAttachmentImageViews:(id)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleAndContentStrings:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (id)titleAndContentStrings;

@end
