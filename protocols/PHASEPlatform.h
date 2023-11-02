
@protocol PHASEPlatform <NSObject>

@required

- (unsigned int)bufferFrameSize;
- (unsigned int)deviceLatencyInFramesForDirection:(unsigned char)arg1;
- (unsigned int)numberOfStreamsForDirection:(unsigned char)arg1;
- (bool)registerIOBlock:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct PHASEIOCycleInfo { struct AudioTimeStamp { double x_1_1_1; unsigned long long x_1_1_2; double x_1_1_3; unsigned long long x_1_1_4; struct SMPTETime { short x_5_2_1; short x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; short x_5_2_6; short x_5_2_7; short x_5_2_8; short x_5_2_9; } x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; } x1; struct AudioTimeStamp { double x_2_1_1; unsigned long long x_2_1_2; double x_2_1_3; unsigned long long x_2_1_4; struct SMPTETime { short x_5_2_1; short x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; short x_5_2_6; short x_5_2_7; short x_5_2_8; short x_5_2_9; } x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; } x2; struct AudioTimeStamp { double x_3_1_1; unsigned long long x_3_1_2; double x_3_1_3; unsigned long long x_3_1_4; struct SMPTETime { short x_5_2_1; short x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; short x_5_2_6; short x_5_2_7; short x_5_2_8; short x_5_2_9; } x_3_1_5; unsigned int x_3_1_6; unsigned int x_3_1_7; } x3; }*, unsigned long long, struct PHASEIOStream { struct AudioTimeStamp { double x_1_1_1; unsigned long long x_1_1_2; double x_1_1_3; unsigned long long x_1_1_4; struct SMPTETime { short x_5_2_1; short x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; short x_5_2_6; short x_5_2_7; short x_5_2_8; short x_5_2_9; } x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; } x1; unsigned int x2; bool x3; struct AudioBufferList {} *x4; }*, unsigned long long, struct PHASEIOStream { struct AudioTimeStamp { double x_1_1_1; unsigned long long x_1_1_2; double x_1_1_3; unsigned long long x_1_1_4; struct SMPTETime { short x_5_2_1; short x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; short x_5_2_6; short x_5_2_7; short x_5_2_8; short x_5_2_9; } x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; } x1; unsigned int x2; bool x3; struct AudioBufferList {} *x4; }*, void*
- (bool)registerOverloadNotification:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)registerRouteChangeNotification:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PHASERouteChangeInfo> *, void*
- (bool)running;
- (double)sampleRate;
- (bool)start;
- (bool)stop;
- (<PHASEStreamInfo> *)streamInfoForIndex:(unsigned int)arg1 direction:(unsigned char)arg2;

@optional

- (bool)enableIO:(bool)arg1 direction:(unsigned char)arg2;
- (void)registerTapInterface:(id <PHASETapInterface>)arg1;
- (<PHASESessionInterface> *)sessionInterface;
- (OS_os_workgroup *)workgroup;

@end
