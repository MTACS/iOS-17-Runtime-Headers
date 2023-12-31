
@interface ICMediaTimeLabel : UILabel {
    ICMediaTimeFormatter * _formatter;
    ICMediaTime * _mediaTimeValue;
}

@property (nonatomic, retain) ICMediaTimeFormatter *formatter;
@property (nonatomic, copy) ICMediaTime *mediaTimeValue;

- (void).cxx_destruct;
- (id)accessibilityValue;
- (void)commonInit;
- (id)formatter;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)mediaTimeValue;
- (void)setFormatter:(id)arg1;
- (void)setMediaTimeValue:(id)arg1;

@end
