
@interface APCListenerEngine : NSObject {
    AUPasscodeCodecConfiguration * _codecConfig;
    AUPasscodeDecoder * _decoderAU;
    AVAudioUnit * _decoderAUNode;
    AVAudioEngine * _engine;
    AVAudioSession * _session;
}

+ (id)listenerWithCodecConfig:(id)arg1 queue:(id)arg2 dataReceivedHandler:(id /* block */)arg3 error:(id*)arg4;
+ (id)listenerWithCodecConfig:(id)arg1 queue:(id)arg2 dataReceivedHandler:(id /* block */)arg3 resultData:(id)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (id)createAU:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1;
- (void)createEngineAndAttachNodes;
- (id)initWithCodecConfig:(id)arg1 queue:(id)arg2 dataReceivedHandler:(id /* block */)arg3 resultData:(id)arg4 error:(id*)arg5;
- (void)makeEngineConnectionsWithError:(id*)arg1;
- (void)setupAudioSession;
- (void)startEngineWithError:(id*)arg1;
- (void)stopEngine;
- (bool)validateInputNodeWithFormat:(id)arg1;

@end
