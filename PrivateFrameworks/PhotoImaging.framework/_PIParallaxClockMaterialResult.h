
@interface _PIParallaxClockMaterialResult : _NURenderResult <PIParallaxClockMaterialResult> {
    double  _clockAreaLuminance;
}

@property (nonatomic, readonly) double clockAreaLuminance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (double)clockAreaLuminance;
- (id)initWithClockAreaLuminance:(double)arg1;

@end
