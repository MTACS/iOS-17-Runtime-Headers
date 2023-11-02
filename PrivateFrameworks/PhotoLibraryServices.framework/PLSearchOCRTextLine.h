
@interface PLSearchOCRTextLine : NSObject {
    NSArray * _candidates;
    bool  _isTitle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _textBounds;
}

@property (nonatomic, readonly) NSArray *candidates;
@property (nonatomic, readonly) bool isTitle;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } textBounds;

- (void).cxx_destruct;
- (id)candidates;
- (id)description;
- (id)initWithTextBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTitle:(bool)arg2 candidates:(id)arg3;
- (bool)isTitle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textBounds;

@end
