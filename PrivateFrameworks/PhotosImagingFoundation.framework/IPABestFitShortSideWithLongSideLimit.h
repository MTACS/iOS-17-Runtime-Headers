
@interface IPABestFitShortSideWithLongSideLimit : IPAImageSizePolicy {
    long long  _maxLongSide;
    long long  _minLongSide;
    long long  _nominalShortSide;
}

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNominalShortSide:(long long)arg1 minLongSide:(long long)arg2 maxLongSide:(long long)arg3;
- (bool)isBestFitPolicy;
- (bool)isEqual:(id)arg1;
- (double)transformScaleForSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })transformSize:(struct CGSize { double x1; double x2; })arg1;

@end
