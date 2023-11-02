
@interface IPABestFitImageSizePolicy : IPAImageSizePolicy {
    struct CGSize { 
        double width; 
        double height; 
    }  _fitSize;
}

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFitSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isBestFitPolicy;
- (bool)isEqual:(id)arg1;
- (double)transformScaleForSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })transformSize:(struct CGSize { double x1; double x2; })arg1;

@end
