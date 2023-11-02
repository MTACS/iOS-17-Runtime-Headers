
@interface SearchUITruncatingListLabel : UIView {
    NSString * _caption;
    TLKLabel * _label;
    NSArray * _list;
}

@property (nonatomic, retain) NSString *caption;
@property (nonatomic, retain) TLKLabel *label;
@property (nonatomic, retain) NSArray *list;

- (void).cxx_destruct;
- (bool)canFitString:(id)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (id)caption;
- (id)init;
- (id)label;
- (void)layoutSubviews;
- (id)list;
- (long long)numberOfLines;
- (void)setCaption:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setList:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (void)updateCaption:(id)arg1 list:(id)arg2;
- (void)updateLabelForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)viewForFirstBaselineLayout;

@end
