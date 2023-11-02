
@interface UIKBWatch10KeyLayout : NSObject {
    double  _controlKeyWidthRatio;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    long long  _gridColumns;
    NSMutableArray * _gridKeyFrames;
    long long  _gridRows;
    NSArray * _leftControlKeyFrames;
    long long  _leftControlKeys;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _leftControlKeysInsets;
    NSArray * _rightControlKeyFrames;
    long long  _rightControlKeys;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _rightControlKeysInsets;
}

@property (nonatomic) double controlKeyWidthRatio;
@property (nonatomic) long long gridColumns;
@property (nonatomic) long long gridRows;
@property (nonatomic) long long leftControlKeys;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } leftControlKeysInsets;
@property (nonatomic) long long rightControlKeys;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } rightControlKeysInsets;

- (void).cxx_destruct;
- (double)controlKeyWidthRatio;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForGridKeyAt:(long long)arg1 inRow:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLeftControlKeyAt:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForRightControlKeyAt:(long long)arg1;
- (long long)gridColumns;
- (long long)gridRows;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layout;
- (id)layoutControlKeys:(long long)arg1 in:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)leftControlKeys;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })leftControlKeysInsets;
- (long long)rightControlKeys;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })rightControlKeysInsets;
- (void)setControlKeyWidthRatio:(double)arg1;
- (void)setGridColumns:(long long)arg1;
- (void)setGridRows:(long long)arg1;
- (void)setLeftControlKeys:(long long)arg1;
- (void)setLeftControlKeysInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setRightControlKeys:(long long)arg1;
- (void)setRightControlKeysInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
