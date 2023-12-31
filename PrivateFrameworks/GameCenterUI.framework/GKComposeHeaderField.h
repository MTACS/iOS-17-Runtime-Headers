
@interface GKComposeHeaderField : GKBaseComposeHeaderField {
    GKLabel * _valueLabel;
}

@property (nonatomic, retain) GKLabel *valueLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMaxLineCount:(unsigned long long)arg1;
- (void)setValueLabel:(id)arg1;
- (void)setValueText:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })valueFrame;
- (id)valueLabel;
- (id)valueText;

@end
