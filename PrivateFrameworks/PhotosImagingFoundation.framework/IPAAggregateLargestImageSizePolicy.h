
@interface IPAAggregateLargestImageSizePolicy : IPAImageSizePolicy {
    NSArray * _policies;
}

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPolicies:(id)arg1;
- (bool)isBestFitPolicy;
- (bool)isEqual:(id)arg1;
- (double)transformScaleForSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })transformSize:(struct CGSize { double x1; double x2; })arg1;

@end
