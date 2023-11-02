
@protocol UICellAccessoryLayout <NSObject>

@required

- (id /* block */)disclosureLayoutWidthProvider:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (unsigned long long)edge;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endLayout;
- (double)finalAlphaForAccessory:(_UICellAccessory *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalFrameForAccessory:(_UICellAccessory *)arg1;
- (double)initialAlphaForAccessory:(_UICellAccessory *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrameForAccessory:(_UICellAccessory *)arg1;
- (UICellAccessoryManager *)manager;
- (void)prepareLayoutForAccessories:(NSArray *)arg1 previousAccessories:(NSArray *)arg2 configurationIdentifier:(NSString *)arg3 animated:(bool)arg4;
- (double)safeAreaInset;
- (void)setDisclosureLayoutWidthProvider:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, double, id /* block */, void*
- (void)setEdge:(unsigned long long)arg1;
- (void)setManager:(UICellAccessoryManager *)arg1;
- (void)setSafeAreaInset:(double)arg1;
- (void)setStandardLayoutWidthProvider:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, double, id /* block */, void*
- (id /* block */)standardLayoutWidthProvider:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL

@end
