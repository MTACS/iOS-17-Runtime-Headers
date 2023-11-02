
@interface VCPVideoActivityDescriptor : NSObject {
    int  _heightInMb;
    float * _motionMagnitude;
    long long * _motionMagnitudeHistogram;
    int  _widthInMb;
    float  descriptors;
}

@property (readonly) float*descriptors;

- (void)ExtractActivityDescriptorFromStats:(struct EncodeStats { int (**x1)(); bool *x2; bool *x3; struct MotionVector {} *x4; struct MotionVector {} *x5; struct MotionVector {} *x6; struct MotionVector {} *x7; unsigned short *x8; unsigned short *x9; unsigned int *x10; unsigned short *x11; unsigned short *x12; unsigned short *x13; unsigned short *x14; unsigned short *x15; unsigned short *x16; unsigned short *x17; unsigned short *x18; unsigned short *x19; unsigned short *x20; unsigned short *x21; unsigned int x22; bool x23; bool x24; bool x25; int x26; int x27; }*)arg1;
- (void)dealloc;
- (float*)descriptors;
- (id)initWithFrameWidthInMb:(int)arg1 heightInMb:(int)arg2;
- (void)reset;
- (void)spatialDescriptorWithMvMagnitudeMean:(float)arg1;

@end
