
@interface IPABestFitImageWidthPolicy : IPAImageSizePolicy {
    double  _fitWidth;
}

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithWidth:(double)arg1;
- (bool)isBestFitPolicy;
- (bool)isEqual:(id)arg1;
- (double)transformScaleForSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })transformSize:(struct CGSize { double x1; double x2; })arg1;

@end