
@interface CNContactDowntimeView : UIView {
    NSDictionary * _ab_textAttributes;
    UILabel * _downtimeLabel;
    long long  _elements;
    NSTextAttachment * _imageAttachment;
}

@property (nonatomic, copy) NSDictionary *ab_textAttributes;
@property (nonatomic, readonly) UILabel *downtimeLabel;
@property (nonatomic) long long elements;
@property (nonatomic, readonly) NSTextAttachment *imageAttachment;

+ (id)lockImageAttachment;

- (void).cxx_destruct;
- (id)ab_textAttributes;
- (id)downtimeLabel;
- (long long)elements;
- (id)imageAttachment;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)setAb_textAttributes:(id)arg1;
- (void)setElements:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateAttributedText;

@end
