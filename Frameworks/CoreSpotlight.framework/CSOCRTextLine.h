
@interface CSOCRTextLine : NSObject {
    long long  _count;
    bool  _isTitle;
    double  _scores;
    NSString * _strings;
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

- (void).cxx_destruct;
- (void)addCandidate:(id)arg1 confidence:(double)arg2;
- (void)appendToString:(id)arg1;
- (id)description;
- (id)initWithTextBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTitle:(bool)arg2;

@end
