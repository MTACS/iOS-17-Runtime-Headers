
@interface CHDRelativeSizeAnchor : CHDAnchor {
    struct CGPoint { 
        double x; 
        double y; 
    }  mFrom;
    struct CGPoint { 
        double x; 
        double y; 
    }  mTo;
}

- (struct CGPoint { double x1; double x2; })from;
- (void)setFrom:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTo:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })to;

@end
