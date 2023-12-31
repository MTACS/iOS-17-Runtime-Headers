
@interface VTSiriPHash : NSObject {
    short  _signalEstimate;
    unsigned char  _signalFractional;
}

@property short signalEstimate;
@property unsigned char signalFractional;

+ (unsigned long long)sampleSizeForSignalEstimate;
+ (id)sharedPhash;

- (id)init;
- (unsigned short)pHash:(float*)arg1 length:(int)arg2;
- (void)setSignalEstimate:(short)arg1;
- (void)setSignalFractional:(unsigned char)arg1;
- (short)signalEstimate;
- (unsigned char)signalFractional;

@end
