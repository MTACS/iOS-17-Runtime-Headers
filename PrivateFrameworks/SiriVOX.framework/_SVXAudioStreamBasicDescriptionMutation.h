
@interface _SVXAudioStreamBasicDescriptionMutation : NSObject <SVXAudioStreamBasicDescriptionMutating> {
    SVXAudioStreamBasicDescription * _baseModel;
    unsigned int  _bitsPerChannel;
    unsigned int  _bytesPerFrame;
    unsigned int  _bytesPerPacket;
    unsigned int  _channelsPerFrame;
    unsigned int  _formatFlags;
    unsigned int  _formatID;
    unsigned int  _framesPerPacket;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasSampleRate : 1; 
        unsigned int hasFormatID : 1; 
        unsigned int hasFormatFlags : 1; 
        unsigned int hasBytesPerPacket : 1; 
        unsigned int hasFramesPerPacket : 1; 
        unsigned int hasBytesPerFrame : 1; 
        unsigned int hasChannelsPerFrame : 1; 
        unsigned int hasBitsPerChannel : 1; 
        unsigned int hasReserved : 1; 
    }  _mutationFlags;
    unsigned int  _reserved;
    double  _sampleRate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setBitsPerChannel:(unsigned int)arg1;
- (void)setBytesPerFrame:(unsigned int)arg1;
- (void)setBytesPerPacket:(unsigned int)arg1;
- (void)setChannelsPerFrame:(unsigned int)arg1;
- (void)setFormatFlags:(unsigned int)arg1;
- (void)setFormatID:(unsigned int)arg1;
- (void)setFramesPerPacket:(unsigned int)arg1;
- (void)setReserved:(unsigned int)arg1;
- (void)setSampleRate:(double)arg1;

@end
