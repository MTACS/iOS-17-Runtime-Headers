
@interface SFSSAudioData : NSObject {
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
    NSData * _audioData;
    long long  _packetCount;
    NSData * _packetDescriptions;
}

@property (nonatomic) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } asbd;
@property (nonatomic, retain) NSData *audioData;
@property (nonatomic) long long packetCount;
@property (nonatomic, retain) NSData *packetDescriptions;

- (void).cxx_destruct;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })asbd;
- (id)audioData;
- (double)duration;
- (id)initWithASBD:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1 rawData:(id)arg2;
- (long long)packetCount;
- (id)packetDescriptions;
- (bool)populateWithOpusData:(id)arg1;
- (bool)populateWithPCMData:(id)arg1;
- (void)setAsbd:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)setAudioData:(id)arg1;
- (void)setPacketCount:(long long)arg1;
- (void)setPacketDescriptions:(id)arg1;

@end
