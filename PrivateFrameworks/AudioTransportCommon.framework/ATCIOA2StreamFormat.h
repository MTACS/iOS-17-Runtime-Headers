
@interface ATCIOA2StreamFormat : NSObject <NSCopying> {
    unsigned int  _bitsPerChannel;
    unsigned int  _bytesPerFrame;
    unsigned int  _bytesPerPacket;
    unsigned int  _channelsPerFrame;
    unsigned int  _formatFlags;
    unsigned int  _formatID;
    unsigned int  _framesPerPacket;
    double  _sampleRate;
}

@property (nonatomic) unsigned int bitsPerChannel;
@property (nonatomic) unsigned int bytesPerFrame;
@property (nonatomic) unsigned int bytesPerPacket;
@property (nonatomic) unsigned int channelsPerFrame;
@property (nonatomic) unsigned int formatFlags;
@property (nonatomic) unsigned int formatID;
@property (nonatomic) unsigned int framesPerPacket;
@property (nonatomic) double sampleRate;

+ (id)aeaStreamFormatWithDictionary:(id)arg1;
+ (id)aeaStreamFormatsWithRangedDictionary:(id)arg1;

- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })audioStreamBasicDescription;
- (unsigned int)bitsPerChannel;
- (unsigned int)bytesPerFrame;
- (unsigned int)bytesPerPacket;
- (unsigned int)channelsPerFrame;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)formatFlags;
- (unsigned int)formatID;
- (unsigned int)framesPerPacket;
- (unsigned int)framesToBytes:(unsigned int)arg1;
- (unsigned long long)hash;
- (id)initWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (id)initWithIOAudio2Dictionary:(id)arg1;
- (id)initWithSampleRate:(double)arg1 numChannels:(unsigned int)arg2 commonPCMFormat:(unsigned int)arg3 isInterleaved:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (double)sampleRate;
- (void)setBitsPerChannel:(unsigned int)arg1;
- (void)setBytesPerFrame:(unsigned int)arg1;
- (void)setBytesPerPacket:(unsigned int)arg1;
- (void)setChannelsPerFrame:(unsigned int)arg1;
- (void)setFormatFlags:(unsigned int)arg1;
- (void)setFormatID:(unsigned int)arg1;
- (void)setFramesPerPacket:(unsigned int)arg1;
- (void)setSampleRate:(double)arg1;

@end
