
@interface PHASEPushStreamNode : NSObject {
    struct UniqueObjectId { 
        unsigned long long mStorage[2]; 
    }  _actionTreeUniqueId;
    PHASEEngine * _engine;
    AVAudioFormat * _format;
    PHASENumberMetaParameter * _gainMetaParameter;
    PHASEMixer * _mixer;
    unsigned long long  _nodeUID;
    bool  _normalize;
    PHASENumberMetaParameter * _rateMetaParameter;
    NSNumber * _targetLKFS;
}

@property (nonatomic) PHASEEngine *engine;
@property (nonatomic, readonly) AVAudioFormat *format;
@property (nonatomic, readonly) PHASENumberMetaParameter *gainMetaParameter;
@property (nonatomic, readonly) PHASEMixer *mixer;
@property (readonly) bool normalize;
@property (nonatomic, readonly) PHASENumberMetaParameter *rateMetaParameter;
@property (readonly) NSNumber *targetLKFS;

- (void).cxx_destruct;
- (id)engine;
- (id)format;
- (id)gainMetaParameter;
- (id)initWithEngine:(id)arg1 actionTreeUniqueId:(struct UniqueObjectId { unsigned long long x1[2]; })arg2 nodeStringHashId:(unsigned long long)arg3 mixer:(id)arg4 format:(id)arg5 normalize:(bool)arg6;
- (id)initWithEngine:(id)arg1 actionTreeUniqueId:(struct UniqueObjectId { unsigned long long x1[2]; })arg2 nodeStringHashId:(unsigned long long)arg3 mixer:(id)arg4 format:(id)arg5 normalize:(bool)arg6 targetLKFS:(id)arg7;
- (id)mixer;
- (bool)normalize;
- (id)rateMetaParameter;
- (void)scheduleBuffer:(id)arg1;
- (void)scheduleBuffer:(id)arg1 atTime:(id)arg2 options:(unsigned long long)arg3;
- (void)scheduleBuffer:(id)arg1 atTime:(id)arg2 options:(unsigned long long)arg3 completionCallbackType:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)scheduleBuffer:(id)arg1 completionCallbackType:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setEngine:(id)arg1;
- (id)targetLKFS;

@end
