
@interface RUIHeaderView : UIView <RUIHeader> {
    bool  _customIconSize;
    RUILinkLabel * _detailHeaderLabel;
    bool  _hasLargeIcon;
    UILabel * _headerLabel;
    UIColor * _headerLabelColor;
    UIImageView * _iconView;
    int  _imageAlignment;
    double  _imageLabelPadding;
    bool  _isFirstSection;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margins;
    UILabel * _navSubHeaderLabel;
    UILabel * _navTitleLabel;
    UILabel * _subHeaderLabel;
    double  _subHeaderTopMarginValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIColor *headerLabelColor;
@property (nonatomic) double imageLabelPadding;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margins;
@property (nonatomic) double subHeaderTopMarginValue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_hasIcon;
- (double)_headerOffsetInView:(id)arg1;
- (id)detailHeaderLabel;
- (double)headerHeightForWidth:(double)arg1 inView:(id)arg2;
- (id)headerLabel;
- (id)headerLabelColor;
- (id)iconImage;
- (double)imageLabelPadding;
- (id)initWithAttributes:(id)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margins;
- (id)navSubHeaderLabel;
- (id)navTitleLabel;
- (void)setDetailHeaderColor:(id)arg1;
- (void)setDetailText:(id)arg1 attributes:(id)arg2;
- (void)setHeaderAlignment:(long long)arg1;
- (void)setHeaderColor:(id)arg1;
- (void)setHeaderLabelColor:(id)arg1;
- (void)setHeaderMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIconImage:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageLabelPadding:(double)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNavSubHeaderTitle:(id)arg1;
- (void)setNavTitle:(id)arg1;
- (void)setSectionIsFirst:(bool)arg1;
- (void)setSubHeaderAlignment:(long long)arg1;
- (void)setSubHeaderColor:(id)arg1;
- (void)setSubHeaderText:(id)arg1 attributes:(id)arg2;
- (void)setSubHeaderTopMargin:(double)arg1;
- (void)setSubHeaderTopMarginValue:(double)arg1;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (id)subHeaderLabel;
- (double)subHeaderTopMarginValue;

@end
