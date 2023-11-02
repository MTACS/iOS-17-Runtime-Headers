
@interface MRAudioBuffer : NSObject {
    AVAudioCompressedBuffer * _buffer;
    NSDictionary * _formatSettings;
}

@property (nonatomic, readonly) AVAudioCompressedBuffer *buffer;
@property (nonatomic, readonly) NSDictionary *formatSettings;

- (void).cxx_destruct;
- (id)buffer;
- (id)formatSettings;
- (id)initWithFormatSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maximumPacketSize:(unsigned long long)arg3;

@end
