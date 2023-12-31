
@interface CHDAbsoluteSizeAnchor : CHDAnchor {
    struct CGPoint { 
        double x; 
        double y; 
    }  mFrom;
    struct CGSize { 
        double width; 
        double height; 
    }  mSize;
}

- (struct CGPoint { double x1; double x2; })from;
- (void)setFrom:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
