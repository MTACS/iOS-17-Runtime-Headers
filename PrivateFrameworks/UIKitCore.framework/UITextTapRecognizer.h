
@interface UITextTapRecognizer : UITapGestureRecognizer {
    double  _touchBasedAllowableMovement;
    NSArray * _touchesForTap;
}

@property (nonatomic) double touchBasedAllowableMovement;
@property (nonatomic, retain) NSArray *touchesForTap;

- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setTouchBasedAllowableMovement:(double)arg1;
- (void)setTouchesForTap:(id)arg1;
- (double)touchBasedAllowableMovement;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)touchesForTap;

@end
