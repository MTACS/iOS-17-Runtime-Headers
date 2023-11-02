
@interface CKDetailsSeparatorCell : CKDetailsCell {
    bool  _indentSeparator;
    double  _leadingSpace;
    UIView * _separatorView;
}

@property (nonatomic) bool indentSeparator;
@property (nonatomic) double leadingSpace;
@property (nonatomic, readonly) UIView *separatorView;

+ (double)defaultHeight;
+ (double)defaultLeadingSpace;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (bool)indentSeparator;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (double)leadingSpace;
- (void)prepareForReuse;
- (id)separatorView;
- (void)setIndentSeparator:(bool)arg1;
- (void)setLeadingSpace:(double)arg1;

@end
