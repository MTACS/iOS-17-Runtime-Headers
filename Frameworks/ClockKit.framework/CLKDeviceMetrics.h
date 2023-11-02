
@interface CLKDeviceMetrics : NSObject {
    CLKDevice * _device;
    unsigned long long  _identitySizeClass;
    NSNumber * _newestAllowedSizeClass;
    unsigned long long  _roundingBehavior;
    NSMutableDictionary * _scales;
}

@property (nonatomic, retain) NSNumber *newestAllowedSizeClass;
@property (nonatomic) unsigned long long roundingBehavior;

+ (id)metricsWithDevice:(id)arg1 identitySizeClass:(unsigned long long)arg2;

- (void).cxx_destruct;
- (unsigned long long)_effectiveSizeClass;
- (double)_unroundedScaledValue:(double)arg1;
- (struct CGPoint { double x1; double x2; })constantPoint:(struct CGPoint { double x1; double x2; })arg1 withOverride:(struct CGPoint { double x1; double x2; })arg2 forSizeClass:(unsigned long long)arg3;
- (struct CGPoint { double x1; double x2; })constantPoint:(struct CGPoint { double x1; double x2; })arg1 withOverrides:(id)arg2;
- (struct CGSize { double x1; double x2; })constantSize:(struct CGSize { double x1; double x2; })arg1 withOverride:(struct CGSize { double x1; double x2; })arg2 forSizeClass:(unsigned long long)arg3;
- (struct CGSize { double x1; double x2; })constantSize:(struct CGSize { double x1; double x2; })arg1 withOverrides:(id)arg2;
- (double)constantValue:(double)arg1 withOverride:(double)arg2 forSizeClass:(unsigned long long)arg3;
- (double)constantValue:(double)arg1 withOverrides:(id)arg2;
- (id)initWithDevice:(id)arg1 identitySizeClass:(unsigned long long)arg2;
- (id)newestAllowedSizeClass;
- (struct CGPoint { double x1; double x2; })pointCompact:(struct CGPoint { double x1; double x2; })arg1 regular:(struct CGPoint { double x1; double x2; })arg2 luxoCompact:(struct CGPoint { double x1; double x2; })arg3 luxoRegular:(struct CGPoint { double x1; double x2; })arg4 aloeCompact:(struct CGPoint { double x1; double x2; })arg5 aloeRegular:(struct CGPoint { double x1; double x2; })arg6;
- (struct CGPoint { double x1; double x2; })pointCompact:(struct CGPoint { double x1; double x2; })arg1 regular:(struct CGPoint { double x1; double x2; })arg2 luxoCompact:(struct CGPoint { double x1; double x2; })arg3 luxoRegular:(struct CGPoint { double x1; double x2; })arg4 aloeCompact:(struct CGPoint { double x1; double x2; })arg5 aloeRegular:(struct CGPoint { double x1; double x2; })arg6 agave:(struct CGPoint { double x1; double x2; })arg7;
- (unsigned long long)roundingBehavior;
- (struct CGPoint { double x1; double x2; })scaledPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })scaledPoint:(struct CGPoint { double x1; double x2; })arg1 withOverride:(struct CGPoint { double x1; double x2; })arg2 forSizeClass:(unsigned long long)arg3;
- (struct CGPoint { double x1; double x2; })scaledPoint:(struct CGPoint { double x1; double x2; })arg1 withOverrides:(id)arg2;
- (struct CGSize { double x1; double x2; })scaledSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })scaledSize:(struct CGSize { double x1; double x2; })arg1 withOverride:(struct CGSize { double x1; double x2; })arg2 forSizeClass:(unsigned long long)arg3;
- (struct CGSize { double x1; double x2; })scaledSize:(struct CGSize { double x1; double x2; })arg1 withOverrides:(id)arg2;
- (double)scaledValue:(double)arg1;
- (double)scaledValue:(double)arg1 withOverride:(double)arg2 forSizeClass:(unsigned long long)arg3;
- (double)scaledValue:(double)arg1 withOverrides:(id)arg2;
- (void)setNewestAllowedSizeClass:(id)arg1;
- (void)setRoundingBehavior:(unsigned long long)arg1;
- (void)setScale:(double)arg1 forSizeClass:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })sizeCompact:(struct CGSize { double x1; double x2; })arg1 regular:(struct CGSize { double x1; double x2; })arg2 luxoCompact:(struct CGSize { double x1; double x2; })arg3 luxoRegular:(struct CGSize { double x1; double x2; })arg4 aloeCompact:(struct CGSize { double x1; double x2; })arg5 aloeRegular:(struct CGSize { double x1; double x2; })arg6;
- (struct CGSize { double x1; double x2; })sizeCompact:(struct CGSize { double x1; double x2; })arg1 regular:(struct CGSize { double x1; double x2; })arg2 luxoCompact:(struct CGSize { double x1; double x2; })arg3 luxoRegular:(struct CGSize { double x1; double x2; })arg4 aloeCompact:(struct CGSize { double x1; double x2; })arg5 aloeRegular:(struct CGSize { double x1; double x2; })arg6 agave:(struct CGSize { double x1; double x2; })arg7;
- (double)valueCompact:(double)arg1 regular:(double)arg2 luxoCompact:(double)arg3 luxoRegular:(double)arg4 aloeCompact:(double)arg5 aloeRegular:(double)arg6;
- (double)valueCompact:(double)arg1 regular:(double)arg2 luxoCompact:(double)arg3 luxoRegular:(double)arg4 aloeCompact:(double)arg5 aloeRegular:(double)arg6 agave:(double)arg7;

@end
