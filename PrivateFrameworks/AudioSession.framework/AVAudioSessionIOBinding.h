
@interface AVAudioSessionIOBinding : NSObject {
    AVAudioSession * _session;
    NSArray * _streams;
}

@property (nonatomic, readonly) AVAudioSession *session;
@property (nonatomic, readonly) NSArray *streams;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSession:(id)arg1;
- (id)initWithSession:(id)arg1 streams:(id)arg2 error:(id*)arg3;
- (id)session;
- (id)streams;

@end
