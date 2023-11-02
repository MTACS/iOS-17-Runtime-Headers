
@interface IPAShortestEdgeImageSizePolicy : IPAImageSizePolicy {
    double  _shortestEdge;
}

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithShortestEdge:(double)arg1;
- (bool)isBestFitPolicy;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })transformSize:(struct CGSize { double x1; double x2; })arg1;

@end
