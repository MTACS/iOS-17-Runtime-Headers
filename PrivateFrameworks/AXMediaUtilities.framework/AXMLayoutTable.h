
@interface AXMLayoutTable : AXMLayoutItem {
    NSMutableArray * _columns;
    AXMLayoutHeader * _header;
    NSMutableArray * _rows;
}

+ (id)region:(id)arg1 row:(id)arg2;

- (void).cxx_destruct;
- (void)addColumn:(id)arg1;
- (void)addRow:(id)arg1;
- (id)columns;
- (id)firstColumn;
- (id)firstLine;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)header;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedFrame;
- (id)rows;

@end
