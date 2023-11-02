
@interface _SBDisplayItemGridCacheKey : NSObject <NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    unsigned long long  _cachedHash;
    SBSwitcherChamoisLayoutAttributes * _chamoisLayoutAttributes;
    SBDisplayItemGridLayoutRestrictionInfo * _layoutRestrictionInfo;
    long long  _orientation;
    double  _screenScale;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 orientation:(long long)arg2 layoutRestrictionInfo:(id)arg3 screenScale:(double)arg4 chamoisLayoutAttributes:(id)arg5;
- (bool)isEqual:(id)arg1;

@end
