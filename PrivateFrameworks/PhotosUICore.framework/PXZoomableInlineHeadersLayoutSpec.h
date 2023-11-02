
@interface PXZoomableInlineHeadersLayoutSpec : PXFeatureSpec {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _headerFloatMargins;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _headerFloatMarginsWithTallSafeAreaInsets;
    double  _headerOffsetY;
    unsigned long long  _style;
}

@property (nonatomic, readonly) double headerOffsetY;
@property (nonatomic, readonly) unsigned long long style;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })headerFloatMarginsForSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (double)headerOffsetY;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (unsigned long long)style;

@end
