
@interface CKAttributionCountView : UICollectionReusableView {
    long long  _count;
    UILabel * _labelView;
    NSArray * _textSizeContraints;
}

@property (nonatomic) long long count;
@property (nonatomic, readonly) UILabel *labelView;
@property (nonatomic, retain) NSArray *textSizeContraints;

+ (struct CGSize { double x1; double x2; })preferredSizeForCount:(long long)arg1;
+ (struct CGSize { double x1; double x2; })preferredSizeForCountString:(id)arg1;
+ (id)reuseIdentifier;
+ (id)supplementaryViewKind;

- (void).cxx_destruct;
- (long long)count;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)labelView;
- (void)prepareForReuse;
- (void)setCount:(long long)arg1;
- (void)setTextSizeContraints:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textSizeContraints;

@end
