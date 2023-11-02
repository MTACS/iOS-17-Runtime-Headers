
@interface TIRadialErrorGenerator : TIErrorGenerator {
    unsigned long long  _defaultDistanceMax;
    unsigned long long  _defaultDistanceMin;
    unsigned long long  _letterDistanceMax;
    unsigned long long  _letterDistanceMin;
    unsigned long long  _letterErrorProbability;
}

- (id)initWithAttributes:(id)arg1;
- (struct CGPoint { double x1; double x2; })randomBiasForKeyString:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
