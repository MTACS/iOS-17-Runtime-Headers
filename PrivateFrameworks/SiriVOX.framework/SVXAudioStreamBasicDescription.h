
@interface SVXAudioStreamBasicDescription : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _bitsPerChannel;
    unsigned int  _bytesPerFrame;
    unsigned int  _bytesPerPacket;
    unsigned int  _channelsPerFrame;
    unsigned int  _formatFlags;
    unsigned int  _formatID;
    unsigned int  _framesPerPacket;
    unsigned int  _reserved;
    double  _sampleRate;
}

@property (nonatomic, readonly) unsigned int bitsPerChannel;
@property (nonatomic, readonly) unsigned int bytesPerFrame;
@property (nonatomic, readonly) unsigned int bytesPerPacket;
@property (nonatomic, readonly) unsigned int channelsPerFrame;
@property (nonatomic, readonly) unsigned int formatFlags;
@property (nonatomic, readonly) unsigned int formatID;
@property (nonatomic, readonly) unsigned int framesPerPacket;
@property (nonatomic, readonly) unsigned int reserved;
@property (nonatomic, readonly) double sampleRate;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (unsigned int)bitsPerChannel;
- (unsigned int)bytesPerFrame;
- (unsigned int)bytesPerPacket;
- (unsigned int)channelsPerFrame;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)formatFlags;
- (unsigned int)formatID;
- (unsigned int)framesPerPacket;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSampleRate:(double)arg1 formatID:(unsigned int)arg2 formatFlags:(unsigned int)arg3 bytesPerPacket:(unsigned int)arg4 framesPerPacket:(unsigned int)arg5 bytesPerFrame:(unsigned int)arg6 channelsPerFrame:(unsigned int)arg7 bitsPerChannel:(unsigned int)arg8 reserved:(unsigned int)arg9;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (unsigned int)reserved;
- (double)sampleRate;

@end
