
@interface VUILibraryProductInfoView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _footerMargin;
    UIView * _footerView;
    NSArray * _groupedInfos;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _headerMargin;
    UIView * _headerView;
    NSArray * _infos;
    double  _lineSpacing;
    NSArray * _normalizedGroupedInfos;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } footerMargin;
@property (nonatomic, retain) UIView *footerView;
@property (nonatomic, copy) NSArray *groupedInfos;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } headerMargin;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, copy) NSArray *infos;
@property (nonatomic, readonly) double interitemSpacing;
@property (nonatomic, readonly) double lineSpacing;
@property (nonatomic, readonly) long long maxLineCount;
@property (nonatomic, copy) NSArray *normalizedGroupedInfos;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;

- (void).cxx_destruct;
- (unsigned long long)_columnCount;
- (id)_getNormalizedGroupedInfos;
- (void)_layouCellContentView:(id)arg1 inCellBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)_maxWidthForGroupInfos:(id)arg1;
- (double)_sectionInfoWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })footerMargin;
- (id)footerView;
- (id)groupedInfos;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })headerMargin;
- (id)headerView;
- (id)infos;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)interitemSpacing;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (double)lineSpacing;
- (long long)maxLineCount;
- (id)normalizedGroupedInfos;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)setFooterMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFooterView:(id)arg1;
- (void)setGroupedInfos:(id)arg1;
- (void)setHeaderMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHeaderView:(id)arg1;
- (void)setInfos:(id)arg1;
- (void)setNormalizedGroupedInfos:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
