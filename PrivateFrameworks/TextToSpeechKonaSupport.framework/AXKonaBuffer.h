
@interface AXKonaBuffer : NSObject {
    AVAudioPCMBuffer * _buffer;
    NSArray * _markers;
}

@property (nonatomic, retain) AVAudioPCMBuffer *buffer;
@property (nonatomic, retain) NSArray *markers;

- (void).cxx_destruct;
- (id)buffer;
- (id)markers;
- (void)setBuffer:(id)arg1;
- (void)setMarkers:(id)arg1;

@end
