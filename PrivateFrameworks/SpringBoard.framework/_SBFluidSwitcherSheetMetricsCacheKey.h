
@interface _SBFluidSwitcherSheetMetricsCacheKey : NSObject <NSCopying> {
    struct CGSize { 
        double width; 
        double height; 
    }  _boundsSize;
    unsigned long long  _cachedHash;
    long long  _configuration;
    UISApplicationSupportDisplayEdgeInfo * _displayEdgeInfo;
    double  _displayScale;
    long long  _interfaceOrientation;
    long long  _userInterfaceIdiom;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithBoundsSize:(struct CGSize { double x1; double x2; })arg1 interfaceOrientation:(long long)arg2 configuration:(long long)arg3 userInterfaceIdiom:(long long)arg4 displayScale:(double)arg5 displayEdgeInfo:(id)arg6;
- (bool)isEqual:(id)arg1;

@end
