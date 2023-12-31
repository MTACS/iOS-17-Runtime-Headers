
@interface SVVideoAdSkipButton : SVButton {
    unsigned long long  _skipDuration;
}

@property (nonatomic) unsigned long long skipDuration;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setSkipDuration:(unsigned long long)arg1;
- (unsigned long long)skipDuration;
- (id)titleForDuration:(unsigned long long)arg1;

@end
