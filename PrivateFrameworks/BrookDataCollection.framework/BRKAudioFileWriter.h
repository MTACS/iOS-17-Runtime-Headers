
@interface BRKAudioFileWriter : BRKWriter <BRKAudioWriter> {
    struct OpaqueExtAudioFile { } * _audioFile;
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
    }  _format;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_lock_close;
- (void)_lock_writeSamples:(const short*)arg1 count:(unsigned long long)arg2;
- (void)close;
- (id)initWithPath:(id)arg1;
- (void)writeSamples:(const short*)arg1 count:(unsigned long long)arg2;

@end
