
@interface HKBorderLineView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _borderInsets;
    UIColor * _borderLineColor;
    double  _borderWidth;
    long long  _edges;
    double  _minimumHeight;
    double  _minimumWidth;
    NSArray * _verticalDrawRanges;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } borderInsets;
@property (nonatomic, retain) UIColor *borderLineColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) long long edges;
@property (nonatomic) double minimumHeight;
@property (nonatomic) double minimumWidth;
@property (nonatomic, retain) NSArray *verticalDrawRanges;

+ (void)drawBorderLinesInContext:(struct CGContext { }*)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 verticalDrawRanges:(id)arg3 borderEdges:(long long)arg4 borderLineWidth:(double)arg5 borderLineColor:(id)arg6 borderInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg7;

- (void).cxx_destruct;
- (id)_adjustedVerticalDrawRanges;
- (void)_initFields;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })borderInsets;
- (id)borderLineColor;
- (double)borderWidth;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)edges;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)minimumHeight;
- (double)minimumWidth;
- (void)setBorderInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setBorderLineColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setEdges:(long long)arg1;
- (void)setMinimumHeight:(double)arg1;
- (void)setMinimumWidth:(double)arg1;
- (void)setVerticalDrawRanges:(id)arg1;
- (id)verticalDrawRanges;

@end
