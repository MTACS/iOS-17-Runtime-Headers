
@interface ISHintedValue : NSObject {
    NSMutableArray * _dimensions;
    unsigned long long  _options;
    NSMutableArray * _values;
}

@property (readonly) NSMutableArray *dimensions;
@property unsigned long long options;
@property (readonly) NSMutableArray *values;

- (void).cxx_destruct;
- (void)addHintedValue:(id)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (id)dimensions;
- (id)hintedValueForIndex:(long long)arg1;
- (id)hintedValueForSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)indexForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (double)interpolationFactorForSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)options;
- (double)scaleFactorForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOptions:(unsigned long long)arg1;
- (bool)sizeOutsideHintedRange:(struct CGSize { double x1; double x2; })arg1;
- (id)values;

@end
