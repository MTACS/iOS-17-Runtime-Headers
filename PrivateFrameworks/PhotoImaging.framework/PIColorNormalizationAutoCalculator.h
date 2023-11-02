
@interface PIColorNormalizationAutoCalculator : NUAutoCalculator <NUTimeBased> {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  time;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

+ (id)autoCalculatorWithImageData:(id)arg1 orientation:(long long)arg2;
+ (bool)isAvailable;

- (id)initWithComposition:(id)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)submit:(id /* block */)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
