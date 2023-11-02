
@interface CKSearchIndexingFooterCell : UICollectionReusableView <CKSearchResultSupplementryCell> {
    UILabel * _subtitleLabel;
    NSString * _subtitleString;
    UILabel * _titleLabel;
    NSString * _titleString;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  marginInsets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, copy) NSString *subtitleString;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic) bool titleLabelHidden;
@property (nonatomic, copy) NSString *titleString;

+ (double)desiredZPosition;
+ (id)reuseIdentifier;
+ (id)supplementaryViewType;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSubtitleString:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleLabelHidden:(bool)arg1;
- (void)setTitleString:(id)arg1;
- (id)subtitleLabel;
- (id)subtitleString;
- (id)titleLabel;
- (bool)titleLabelHidden;
- (id)titleString;

@end
