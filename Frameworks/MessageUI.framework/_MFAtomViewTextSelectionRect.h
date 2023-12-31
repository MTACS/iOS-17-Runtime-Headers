
@interface _MFAtomViewTextSelectionRect : UITextSelectionRect {
    bool  containsEnd;
    bool  containsStart;
    bool  isVertical;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  rect;
    long long  writingDirection;
}

@property (nonatomic) bool containsEnd;
@property (nonatomic) bool containsStart;
@property (nonatomic) bool isVertical;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property (nonatomic) long long writingDirection;

- (bool)containsEnd;
- (bool)containsStart;
- (bool)isVertical;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)setContainsEnd:(bool)arg1;
- (void)setContainsStart:(bool)arg1;
- (void)setIsVertical:(bool)arg1;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setWritingDirection:(long long)arg1;
- (long long)writingDirection;

@end
