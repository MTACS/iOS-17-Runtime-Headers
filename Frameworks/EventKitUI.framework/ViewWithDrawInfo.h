
@interface ViewWithDrawInfo : UIView {
    CUIKORTextDrawInfo * _drawInfo;
}

@property (nonatomic, retain) CUIKORTextDrawInfo *drawInfo;

- (void).cxx_destruct;
- (id)description;
- (id)drawInfo;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (void)setDrawInfo:(id)arg1;

@end
