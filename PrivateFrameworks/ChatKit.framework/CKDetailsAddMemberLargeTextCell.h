
@interface CKDetailsAddMemberLargeTextCell : CKDetailsAddMemberCell {
    UILayoutGuide * _leadingGuide;
}

@property (nonatomic, retain) UILayoutGuide *leadingGuide;

+ (double)preferredHeight;

- (void).cxx_destruct;
- (void)_initConstraints;
- (void)_initLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)leadingGuide;
- (void)setLeadingGuide:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end