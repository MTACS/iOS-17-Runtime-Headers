
@protocol PXBlurrableSectionsSource

@required

- (void)enumerateBlurrableSectionsIn:(void *)arg1 using:(void *)arg2; // needs 2 arg types, found 8: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, void*
- (void)setBlurIntensity:(double)arg1 forSectionAt:(long long)arg2;

@end
