
@interface VSAudioData : NSObject <NSCopying, NSSecureCoding> {
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
    NSMutableData * _mutableAudioData;
    NSMutableData * _mutableDescription;
    long long  _packetCount;
}

@property (nonatomic) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } asbd;
@property (nonatomic, retain) NSData *audioData;
@property (nonatomic, retain) NSMutableData *mutableAudioData;
@property (nonatomic, retain) NSMutableData *mutableDescription;
@property (nonatomic) long long packetCount;
@property (nonatomic, retain) NSData *packetDescriptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })asbd;
- (id)audioData;
- (void)concatenateWithAudio:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mutableAudioData;
- (id)mutableDescription;
- (long long)packetCount;
- (id)packetDescriptions;
- (void)setAsbd:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)setAudioData:(id)arg1;
- (void)setMutableAudioData:(id)arg1;
- (void)setMutableDescription:(id)arg1;
- (void)setPacketCount:(long long)arg1;
- (void)setPacketDescriptions:(id)arg1;
- (unsigned int)totalFrames;

@end
