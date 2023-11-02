
@interface TUICandidateInlineTextView : UIView {
    UILabel * _label;
    <TUICandidateViewStyle> * _style;
    NSString * _text;
}

@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) <TUICandidateViewStyle> *style;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setText:(id)arg1;
- (id)style;
- (id)text;
- (void)updateLabels;

@end
