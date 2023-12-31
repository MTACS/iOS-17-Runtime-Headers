
@interface SURoundedCornersMaskProvider : SUMaskProvider {
    double  _cornerRadius;
}

@property (nonatomic) double cornerRadius;

- (struct CGPath { }*)copyPathForMaskWithSize:(struct CGSize { double x1; double x2; })arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;

@end
