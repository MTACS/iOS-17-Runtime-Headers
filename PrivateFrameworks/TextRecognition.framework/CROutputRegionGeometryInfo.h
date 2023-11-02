
@interface CROutputRegionGeometryInfo : CRImageSpaceQuad {
    struct CGVector { 
        double dx; 
        double dy; 
    }  _baselineVector;
    double  _estimatedLineHeight;
    struct CGSize { 
        double width; 
        double height; 
    }  cachedSize;
}

@property (readonly) struct CGVector { double x1; double x2; } baselineVector;
@property struct CGSize { double x1; double x2; } cachedSize;
@property double estimatedLineHeight;

- (struct CGVector { double x1; double x2; })baselineVector;
- (struct CGSize { double x1; double x2; })cachedSize;
- (double)estimatedLineHeight;
- (id)initFromOutputRegion:(id)arg1;
- (id)mutualGeometryInfoWith:(id)arg1;
- (void)setCachedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setEstimatedLineHeight:(double)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
