
@interface CKSearchResultsTitleHeaderCell : UICollectionReusableView <CKSearchResultSupplementryCell> {
    UIVisualEffectView * _backgroundVisualEffectView;
    <CKSearchResultsTitleHeaderCellDelegate> * _delegate;
    double  _leadingSeparatorInsets;
    bool  _pinnedEffectVisible;
    unsigned long long  _sectionIndex;
    UILabel * _sectionTitle;
    UIView * _separatorView;
    UIButton * _showAllButton;
    double  _titleBottomPadding;
    double  _titleTopPadding;
    CALayer * _topHairline;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  marginInsets;
}

@property (nonatomic, retain) UIVisualEffectView *backgroundVisualEffectView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKSearchResultsTitleHeaderCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double leadingSeparatorInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (getter=isPinnedEffectVisible, nonatomic) bool pinnedEffectVisible;
@property (nonatomic) unsigned long long sectionIndex;
@property (nonatomic, retain) UILabel *sectionTitle;
@property (nonatomic, retain) UIView *separatorView;
@property (nonatomic, retain) UIButton *showAllButton;
@property (readonly) Class superclass;
@property (nonatomic) double titleBottomPadding;
@property (nonatomic) double titleTopPadding;
@property (nonatomic, retain) CALayer *topHairline;

+ (double)desiredZPosition;
+ (id)reuseIdentifier;
+ (id)supplementaryViewType;

- (void).cxx_destruct;
- (void)_showAllButtonTapped:(id)arg1;
- (id)backgroundVisualEffectView;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPinnedEffectVisible;
- (void)layoutSubviews;
- (void)layoutSubviewsAXFontSizeWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 isLTR:(bool)arg3;
- (void)layoutSubviewsForWolfWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 isLTR:(bool)arg3;
- (void)layoutSubviewsWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 isLTR:(bool)arg3;
- (double)leadingSeparatorInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (unsigned long long)sectionIndex;
- (id)sectionTitle;
- (id)separatorView;
- (void)setBackgroundVisualEffectView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLeadingSeparatorInsets:(double)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPinnedEffectVisible:(bool)arg1;
- (void)setSectionIndex:(unsigned long long)arg1;
- (void)setSectionTitle:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setShowAllButton:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleBottomPadding:(double)arg1;
- (void)setTitleTopPadding:(double)arg1;
- (void)setTopHairline:(id)arg1;
- (id)showAllButton;
- (double)titleBottomPadding;
- (double)titleTopPadding;
- (id)topHairline;

@end
