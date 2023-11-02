
@interface PIWhiteBalanceAutoCalculator : NUAutoCalculator <NUTimeBased>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (struct { double x1[4]; })_chooseNeutralGrayForNonSushi:(struct { struct { double x_1_1_1[4]; } x1; struct { double x_2_1_1[4]; } x2; double x3; })arg1;
- (struct { double x1; double x2; })_chooseTempTintForSushi:(struct { struct { double x_1_1_1[4]; } x1; struct { double x_2_1_1[4]; } x2; double x3; })arg1 RAWProperties:(id)arg2 brightness:(double)arg3;
- (struct { double x1[4]; })_correctedRGBResultFromResult:(struct { double x1[4]; })arg1;
- (bool)_useTempTint:(struct { double x1[4]; })arg1;
- (void)submit:(id /* block */)arg1;

@end
