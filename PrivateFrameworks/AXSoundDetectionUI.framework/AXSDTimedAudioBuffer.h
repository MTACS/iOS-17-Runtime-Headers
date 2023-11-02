
@interface AXSDTimedAudioBuffer : NSObject {
    AVAudioPCMBuffer * _buffer;
    AVAudioTime * _time;
}

@property (nonatomic, retain) AVAudioPCMBuffer *buffer;
@property (nonatomic, retain) AVAudioTime *time;

- (void).cxx_destruct;
- (id)buffer;
- (id)initWithBuffer:(id)arg1 atTime:(id)arg2;
- (void)setBuffer:(id)arg1;
- (void)setTime:(id)arg1;
- (id)time;

@end
