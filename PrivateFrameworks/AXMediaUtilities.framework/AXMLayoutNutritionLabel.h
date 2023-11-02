
@interface AXMLayoutNutritionLabel : AXMLayoutItem {
    NSMutableArray * _rows;
}

+ (id)region:(id)arg1;

- (void).cxx_destruct;
- (void)addRow:(id)arg1;
- (id)firstLine;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedFrame;
- (id)rows;

@end
