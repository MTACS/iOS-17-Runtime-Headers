
@interface VTCorruptDetector : NSObject {
    int  _maxZeroSamplesCount;
    int  _zeroSamplesCount;
}

- (void)analyze:(struct AudioBuffer { unsigned int x1; unsigned int x2; void *x3; })arg1;
- (bool)audioHasZeroRun;
- (int)getMaxZeroSampleCount;
- (id)init;
- (void)reset;

@end
