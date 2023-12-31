
@interface TSDTextSelectionRect : UITextSelectionRect {
    bool  _containsEnd;
    bool  _containsStart;
    bool  _isVertical;
    UITextRange * _range;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
    long long  _writingDirection;
}

@property (nonatomic, retain) UITextRange *range;

- (bool)containsEnd;
- (bool)containsStart;
- (void)dealloc;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 direction:(long long)arg2 range:(id)arg3 containsStart:(bool)arg4 containsEnd:(bool)arg5 isVertical:(bool)arg6;
- (bool)isVertical;
- (id)range;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)setRange:(id)arg1;
- (long long)writingDirection;

@end
