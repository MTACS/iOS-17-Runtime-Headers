
@interface SXUnitConverter : NSObject {
    double  _componentWidth;
    double  _contentScaleFactor;
    double  _documentGutter;
    double  _documentMargin;
    double  _parentWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewportSize;
}

- (double)convertValueToPoints:(struct _SXConvertibleValue { double x1; unsigned long long x2; })arg1;
- (double)convertValueToPoints:(struct _SXConvertibleValue { double x1; unsigned long long x2; })arg1 allowNegativeValues:(bool)arg2;
- (id)initWithComponentWidth:(double)arg1 parentWidth:(double)arg2 documentGutter:(double)arg3 documentMargin:(double)arg4 viewportSize:(struct CGSize { double x1; double x2; })arg5 contentScaleFactor:(double)arg6;

@end
