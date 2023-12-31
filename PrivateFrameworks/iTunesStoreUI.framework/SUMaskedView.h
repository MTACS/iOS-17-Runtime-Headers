
@interface SUMaskedView : UIView {
    SUMaskProvider * _maskProvider;
}

@property (nonatomic, retain) SUMaskProvider *maskProvider;

- (void)_reloadMask;
- (struct CGPath { }*)copyMaskPath;
- (void)dealloc;
- (id)maskProvider;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMaskProvider:(id)arg1;

@end
