
@interface AXMLayoutHeader : AXMLayoutItem {
    NSMutableArray * _cells;
}

+ (id)header:(id)arg1;

- (void).cxx_destruct;
- (void)addCell:(id)arg1;
- (id)cells;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedFrame;

@end
