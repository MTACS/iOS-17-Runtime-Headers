
@interface RawBayerPreProcessor : NSObject <MOVStreamPreProcessor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct opaqueCMFormatDescription { }*)createTrackFormatDescriptionFromStreamData:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg1;
- (unsigned int)encodedPixelFormatFromStreamData:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg1;
- (struct opaqueCMFormatDescription { }*)formatDescriptionForPixelBuffer:(struct __CVBuffer { }*)arg1 streamData:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg2;
- (unsigned int)inputPixelFormatFromStreamData:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg1;
- (struct __CVBuffer { }*)processedPixelBufferCopyOf:(struct __CVBuffer { }*)arg1 streamData:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg2 error:(id*)arg3;

@end
