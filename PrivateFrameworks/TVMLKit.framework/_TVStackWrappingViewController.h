
@interface _TVStackWrappingViewController : _TVStackSupplementalViewController {
    struct TVShowcaseConfig { 
        long long flavor; 
        long long transition; 
        double inset; 
    }  _showcaseConfig;
}

@property (nonatomic) struct TVShowcaseConfig { long long x1; long long x2; double x3; } showcaseConfig;

- (void)setShowcaseConfig:(struct TVShowcaseConfig { long long x1; long long x2; double x3; })arg1;
- (struct TVShowcaseConfig { long long x1; long long x2; double x3; })showcaseConfig;
- (void)tv_setShowcaseConfig:(struct TVShowcaseConfig { long long x1; long long x2; double x3; })arg1;

@end
