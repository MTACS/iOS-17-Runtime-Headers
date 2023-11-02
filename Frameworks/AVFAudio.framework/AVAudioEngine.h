
@interface AVAudioEngine : NSObject {
    void * _impl;
}

@property (readonly, copy) NSSet *attachedNodes;
@property (getter=isAutoShutdownEnabled, nonatomic) bool autoShutdownEnabled;
@property (nonatomic, readonly) AVAudioInputNode *inputNode;
@property (nonatomic, readonly) bool isInManualRenderingMode;
@property (nonatomic, readonly) AVAudioMixerNode *mainMixerNode;
@property (nonatomic, readonly) id /* block */ manualRenderingBlock;
@property (nonatomic, readonly) AVAudioFormat *manualRenderingFormat;
@property (nonatomic, readonly) unsigned int manualRenderingMaximumFrameCount;
@property (nonatomic, readonly) long long manualRenderingMode;
@property (nonatomic, readonly) long long manualRenderingSampleTime;
@property (nonatomic) struct OpaqueMusicSequence { }*musicSequence;
@property (nonatomic, readonly) AVAudioOutputNode *outputNode;
@property (getter=isRunning, nonatomic, readonly) bool running;

- (void)attachNode:(id)arg1;
- (id)attachedNodes;
- (void)connect:(id)arg1 to:(id)arg2 format:(id)arg3;
- (void)connect:(id)arg1 to:(id)arg2 fromBus:(unsigned long long)arg3 toBus:(unsigned long long)arg4 format:(id)arg5;
- (void)connect:(id)arg1 toConnectionPoints:(id)arg2 fromBus:(unsigned long long)arg3 format:(id)arg4;
- (void)connectMIDI:(id)arg1 to:(id)arg2 format:(id)arg3 block:(id /* block */)arg4;
- (void)connectMIDI:(id)arg1 to:(id)arg2 format:(id)arg3 eventListBlock:(id /* block */)arg4;
- (void)connectMIDI:(id)arg1 toNodes:(id)arg2 format:(id)arg3 block:(id /* block */)arg4;
- (void)connectMIDI:(id)arg1 toNodes:(id)arg2 format:(id)arg3 eventListBlock:(id /* block */)arg4;
- (void)dealloc;
- (id)description;
- (void)detachNode:(id)arg1;
- (void)disableManualRenderingMode;
- (void)disconnectMIDI:(id)arg1 from:(id)arg2;
- (void)disconnectMIDI:(id)arg1 fromNodes:(id)arg2;
- (void)disconnectMIDIInput:(id)arg1;
- (void)disconnectMIDIOutput:(id)arg1;
- (void)disconnectNodeInput:(id)arg1;
- (void)disconnectNodeInput:(id)arg1 bus:(unsigned long long)arg2;
- (void)disconnectNodeOutput:(id)arg1;
- (void)disconnectNodeOutput:(id)arg1 bus:(unsigned long long)arg2;
- (bool)enableManualRenderingMode:(long long)arg1 format:(id)arg2 maximumFrameCount:(unsigned int)arg3 error:(id*)arg4;
- (void*)implementation;
- (id)init;
- (id)inputConnectionPointForNode:(id)arg1 inputBus:(unsigned long long)arg2;
- (id)inputNode;
- (bool)isAutoShutdownEnabled;
- (bool)isInManualRenderingMode;
- (bool)isRunning;
- (id)mainMixerNode;
- (id /* block */)manualRenderingBlock;
- (id)manualRenderingFormat;
- (unsigned int)manualRenderingMaximumFrameCount;
- (long long)manualRenderingMode;
- (long long)manualRenderingSampleTime;
- (struct OpaqueMusicSequence { }*)musicSequence;
- (id)outputConnectionPointsForNode:(id)arg1 outputBus:(unsigned long long)arg2;
- (id)outputNode;
- (void)pause;
- (void)prepare;
- (long long)renderOffline:(unsigned int)arg1 toBuffer:(id)arg2 error:(id*)arg3;
- (void)reset;
- (void)setAutoShutdownEnabled:(bool)arg1;
- (void)setMusicSequence:(struct OpaqueMusicSequence { }*)arg1;
- (bool)startAndReturnError:(id*)arg1;
- (void)stop;

@end
