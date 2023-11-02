
@interface PHASEStreamInfoImpl : NSObject <PHASEStreamInfo> {
    AVAudioFormat * _format;
    unsigned int  _latencyInFrames;
    NSDictionary * _streamDescription;
}

@property (nonatomic, readonly) AVAudioFormat *format;
@property (nonatomic, readonly) unsigned int latencyInFrames;
@property (nonatomic, readonly) NSDictionary *streamDescription;

- (void).cxx_destruct;
- (id)format;
- (id)initWithFormat:(id)arg1 latencyInFrames:(unsigned int)arg2;
- (id)initWithFormat:(id)arg1 latencyInFrames:(unsigned int)arg2 streamDescription:(id)arg3;
- (unsigned int)latencyInFrames;
- (id)streamDescription;

@end
