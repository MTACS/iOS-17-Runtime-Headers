
@interface AVMobileTitlebarView : AVView {
    UIView * _contentContainerView;
    CAGradientLayer * _contentContainerViewMask;
    AVMobileContentTag * _contentTag;
    AVMobileContentTagView * _contentTagView;
    <AVMobileTitlebarViewDelegate> * _delegate;
    AVButton * _infoAffordance;
    bool  _showsInfoAffordance;
    AVMobileChromelessControlsStyleSheet * _styleSheet;
    NSAttributedString * _subtitle;
    UILabel * _subtitleLabel;
    NSMutableAttributedString * _subtitleLabelString;
    NSAttributedString * _title;
    UILabel * _titleLabel;
    NSMutableAttributedString * _titleLabelString;
}

@property (nonatomic, retain) AVMobileContentTag *contentTag;
@property (nonatomic, retain) <AVMobileTitlebarViewDelegate> *delegate;
@property (nonatomic) bool showsInfoAffordance;
@property (nonatomic, retain) AVMobileChromelessControlsStyleSheet *styleSheet;
@property (nonatomic, retain) NSAttributedString *subtitle;
@property (nonatomic, retain) NSAttributedString *title;

- (void).cxx_destruct;
- (void)_infoAffordancePressed:(id)arg1;
- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)arg1;
- (id)contentTag;
- (id)delegate;
- (void)didMoveToWindow;
- (id)initWithStyleSheet:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setContentTag:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowsInfoAffordance:(bool)arg1;
- (void)setStyleSheet:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)showsInfoAffordance;
- (id)styleSheet;
- (id)subtitle;
- (id)title;

@end
