
@protocol AVAudioIOController <NSObject>

@required

- (struct AVAudioIOPeriod { double x1; double x2; unsigned long long x3; float x4; })IOPeriod;
- (long long)createIOEventBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; })currentTime;
- (void)destroyIOEventBlock:(long long)arg1;
- (struct AVAudioTimeInterval { double x1; double x2; unsigned long long x3; })dynamicLatency;
- (bool)isRunning;
- (struct AudioPresentationTimeStamp { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; double x8; double x9; })presentationTime;
- (bool)supportsDynamicLatency;

@end
