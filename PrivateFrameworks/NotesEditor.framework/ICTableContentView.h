
@interface ICTableContentView : UIView {
    UIView * _bottomBorder;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _exclusionRect;
    UIColor * _highlightColor;
    NSMutableDictionary * _horizontalStrokes;
    UIView * _leftBorder;
    UIView * _rightBorder;
    UIView * _topBorder;
    NSMutableDictionary * _verticalStrokes;
}

@property (nonatomic, retain) UIView *bottomBorder;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } exclusionRect;
@property (nonatomic, copy) UIColor *highlightColor;
@property (nonatomic, retain) NSMutableDictionary *horizontalStrokes;
@property (nonatomic, readonly) UIColor *innerBorderColor;
@property (nonatomic, readonly) double innerBorderWidth;
@property (nonatomic, retain) UIView *leftBorder;
@property (nonatomic, retain) UIView *rightBorder;
@property (nonatomic, retain) UIView *topBorder;
@property (nonatomic, retain) NSMutableDictionary *verticalStrokes;

- (void).cxx_destruct;
- (id)addSubstrokeWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toStroke:(id)arg2;
- (double)alignedPosition:(double)arg1;
- (id)bottomBorder;
- (id)createStroke;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })exclusionRect;
- (id)highlightColor;
- (id)horizontalStrokes;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)innerBorderColor;
- (double)innerBorderWidth;
- (void)layoutSubviews;
- (id)leftBorder;
- (id)outerBorderColor;
- (double)outerBorderWidth;
- (void)recursivelyUpdateLayer:(id)arg1 toColor:(struct CGColor { }*)arg2 ignoreIfClear:(bool)arg3;
- (id)rightBorder;
- (void)setBottomBorder:(id)arg1;
- (void)setExclusionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setHorizontalLinePosition:(id)arg1 forKey:(id)arg2;
- (void)setHorizontalStrokes:(id)arg1;
- (void)setLeftBorder:(id)arg1;
- (void)setRightBorder:(id)arg1;
- (void)setTopBorder:(id)arg1;
- (void)setVerticalLinePosition:(id)arg1 forKey:(id)arg2;
- (void)setVerticalStrokes:(id)arg1;
- (void)sharedInit;
- (bool)splitStroke:(id)arg1 atRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)topBorder;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unsplitStroke:(id)arg1;
- (void)updateColors;
- (void)updateLayout;
- (id)verticalStrokes;

@end
