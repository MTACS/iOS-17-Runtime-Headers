
@interface _UIBarTapGestureRecognizer : UITapGestureRecognizer {
    bool  _failWhenTappingInBars;
    long long  _tapCategory;
}

@property (nonatomic) bool failWhenTappingInBars;
@property (nonatomic, readonly) long long tapCategory;

- (long long)_categoryForTapLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setDelegate:(id)arg1;
- (id)description;
- (bool)failWhenTappingInBars;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFailWhenTappingInBars:(bool)arg1;
- (long long)tapCategory;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
