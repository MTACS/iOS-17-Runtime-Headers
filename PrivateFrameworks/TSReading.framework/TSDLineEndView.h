
@interface TSDLineEndView : UIView {
    TSDLineEnd * mLineEnd;
    bool  mOnRight;
}

@property (nonatomic, retain) TSDLineEnd *lineEnd;
@property (nonatomic) bool onRight;

+ (id)viewWithLineEnd:(id)arg1 onRight:(bool)arg2;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)lineEnd;
- (bool)onRight;
- (void)setLineEnd:(id)arg1;
- (void)setOnRight:(bool)arg1;

@end
