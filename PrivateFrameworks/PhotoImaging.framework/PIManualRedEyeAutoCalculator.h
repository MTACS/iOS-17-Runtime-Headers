
@interface PIManualRedEyeAutoCalculator : PIRedEyeAutoCalculator {
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    double  _touchDiameter;
}

- (void)_configureRequest:(id)arg1;
- (id)_options;
- (id)initWithComposition:(id)arg1 location:(struct CGPoint { double x1; double x2; })arg2 touchDiameter:(double)arg3;

@end
