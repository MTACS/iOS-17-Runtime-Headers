
@interface _UIWebFindOnPageHighlightBubbleView : UIView {
    struct CGImage { } * _highlightedContent;
    struct CGPoint { 
        double x; 
        double y; 
    }  _highlightedContentOrigin;
}

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlightedContent:(struct CGImage { }*)arg1 withOrigin:(struct CGPoint { double x1; double x2; })arg2;

@end
