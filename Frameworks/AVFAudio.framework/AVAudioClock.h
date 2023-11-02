
@interface AVAudioClock : NSObject {
    void * _impl;
}

@property (nonatomic, readonly) AVAudioTime *currentTime;

- (id)awaitIOCycle:(unsigned int*)arg1;
- (struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; })currentAudioTimeStamp;
- (long long)currentIONumberFrames;
- (id)currentTime;
- (void)dealloc;
- (id)init;
- (id)initWithNode:(void*)arg1;

@end
