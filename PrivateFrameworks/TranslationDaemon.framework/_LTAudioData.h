
@interface _LTAudioData : NSObject {
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _asbd;
    NSData * _data;
    long long  _packetCount;
    NSData * _packetDescriptions;
    NSData * _rawData;
    NSArray * _wordTimingInfo;
}

@property (nonatomic, readonly) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } asbd;
@property (nonatomic, readonly) long long packetCount;
@property (nonatomic, readonly) NSData *packetDescriptions;
@property (nonatomic, readonly) NSData *rawData;
@property (nonatomic, readonly) NSArray *wordTimingInfo;

- (void).cxx_destruct;
- (bool)_populateWithOpusData:(id)arg1;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })asbd;
- (id)initWithASBD:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1 rawData:(id)arg2 wordTimingInfo:(id)arg3;
- (long long)packetCount;
- (id)packetDescriptions;
- (id)rawData;
- (id)wordTimingInfo;
- (void)writeToURL:(id)arg1;

@end
