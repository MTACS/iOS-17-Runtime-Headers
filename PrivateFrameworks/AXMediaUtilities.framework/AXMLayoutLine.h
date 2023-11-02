
@interface AXMLayoutLine : AXMLayoutItem {
    NSMutableArray * _sequences;
}

+ (id)line:(id)arg1;

- (void).cxx_destruct;
- (void)addSequence:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedFrame;
- (id)recognizedTextFeatures;
- (id)sequences;

@end
