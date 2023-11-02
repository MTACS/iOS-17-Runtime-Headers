
@interface PKFooterHyperlinkCell : UICollectionViewListCell {
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _edgeInsets;
    PKMultiHyperlinkView * _hyperLinkView;
    UIColor * _linkTextColor;
    NSArray * _sources;
    NSString * _text;
    long long  _textAlignment;
    UIColor * _textColor;
}

@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, retain) UIColor *linkTextColor;
@property (nonatomic, copy) NSArray *sources;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_configureHyperlinkViewIfNecessary;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (id)linkTextColor;
- (void)setEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLinkTextColor:(id)arg1;
- (void)setSources:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)sources;
- (id)text;
- (long long)textAlignment;
- (id)textColor;

@end
