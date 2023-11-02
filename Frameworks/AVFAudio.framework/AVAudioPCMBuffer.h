
@interface AVAudioPCMBuffer : AVAudioBuffer <NSCoding, NSSecureCoding>

@property (nonatomic, readonly) NSArray *averagePowerPerChannel;
@property (nonatomic, readonly) float**floatChannelData;
@property (nonatomic, readonly) unsigned int frameCapacity;
@property (nonatomic) unsigned int frameLength;
@property (nonatomic, readonly) short**int16ChannelData;
@property (nonatomic, readonly) int**int32ChannelData;
@property (nonatomic, readonly) NSArray *peakPowerPerChannel;
@property (nonatomic, readonly) unsigned long long stride;

// Image: /System/Library/Frameworks/AVFAudio.framework/AVFAudio

- (void)_initChannelPtrs;
- (bool)appendDataFromBuffer:(id)arg1;
- (bool)appendDataFromBuffer:(id)arg1 channel:(long long)arg2;
- (id)averagePowerPerChannel;
- (id)calculatePower:(unsigned long long)arg1;
- (float)calculatePower:(unsigned long long)arg1 forFloatData:(float*)arg2 stride:(long long)arg3 frameLength:(unsigned int)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float**)floatChannelData;
- (unsigned int)frameCapacity;
- (unsigned int)frameLength;
- (id)initWithPCMFormat:(id)arg1 bufferListNoCopy:(const struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg2 deallocator:(id /* block */)arg3;
- (id)initWithPCMFormat:(id)arg1 frameCapacity:(unsigned int)arg2;
- (short**)int16ChannelData;
- (int**)int32ChannelData;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)peakPowerPerChannel;
- (void)setByteLength:(unsigned int)arg1;
- (void)setFrameLength:(unsigned int)arg1;
- (id)splitIntoSingleChannelBuffers;
- (unsigned long long)stride;

// Image: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE

- (void)copyIntoBytes:(float*)arg1;
- (id)initFromBytes:(float*)arg1 format:(id)arg2 length:(unsigned int)arg3;

// Image: /System/Library/PrivateFrameworks/HearingCore.framework/HearingCore

- (id)magnitudesWithLevelMultiplier:(double)arg1 count:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)extractChannels:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
