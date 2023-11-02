
@interface BWPortraitHDRStagingNode : BWNode {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _passthroughBuffer;
    long long  _settingsID;
    struct opaqueCMSampleBuffer { } * _stagedBuffer;
}

+ (void)initialize;

- (void)bufferReceivedWithFlags:(unsigned int)arg1 error:(int)arg2;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)init;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
