
@interface PHASEExternalOutputStreamController : NSObject {
    long long  _calibrationMode;
    unsigned int  _channelLayoutTag;
    struct UniqueObjectId { 
        unsigned long long mStorage[2]; 
    }  _controlToken;
    PHASEEngine * _engine;
    PHASENumberMetaParameterDefinition * _gainMetaParameterDefinition;
    PHASEGroup * _group;
    double  _level;
    PHASEListener * _listener;
    NSMutableDictionary * _metaParameters;
    PHASEMixer * _mixer;
    PHASEMixerDefinition * _mixerDefinition;
    bool  _normalize;
    NSMutableDictionary * _soundEvents;
    PHASESource * _source;
    long long  _state;
    NSUUID * _streamGroupUUID;
    NSNumber * _targetLKFS;
}

@property (readonly) NSDictionary *metaParameters;
@property (nonatomic, readonly) PHASEMixer *mixer;
@property (readonly, copy) NSDictionary *mixers;

+ (void)controllerWithEngine:(id)arg1 streamUUID:(id)arg2 gainMetaParameterDefinition:(id)arg3 mixerDefinition:(id)arg4 source:(id)arg5 listener:(id)arg6 callback:(id /* block */)arg7;
+ (void)controllerWithEngine:(id)arg1 streamUUID:(id)arg2 gainMetaParameterDefinition:(id)arg3 mixerDefinition:(id)arg4 source:(id)arg5 listener:(id)arg6 group:(id)arg7 normalize:(bool)arg8 calibrationMode:(long long)arg9 level:(double)arg10 callback:(id /* block */)arg11;
+ (void)controllerWithEngine:(id)arg1 streamUUID:(id)arg2 gainMetaParameterDefinition:(id)arg3 mixerDefinition:(id)arg4 source:(id)arg5 listener:(id)arg6 group:(id)arg7 normalize:(bool)arg8 targetLKFS:(id)arg9 calibrationMode:(long long)arg10 level:(double)arg11 callback:(id /* block */)arg12;
+ (void)controllerWithEngine:(id)arg1 streamUUID:(id)arg2 gainMetaParameterDefinition:(id)arg3 mixerDefinition:(id)arg4 source:(id)arg5 listener:(id)arg6 normalize:(bool)arg7 calibrationMode:(long long)arg8 level:(double)arg9 callback:(id /* block */)arg10;
+ (void)controllerWithEngine:(id)arg1 streamUUID:(id)arg2 gainMetaParameterDefinition:(id)arg3 mixerDefinition:(id)arg4 source:(id)arg5 listener:(id)arg6 referenceGainDBSPL:(double)arg7 callback:(id /* block */)arg8;
+ (void)controllerWithEngine:(id)arg1 streamUUID:(id)arg2 mixerDefinition:(id)arg3 source:(id)arg4 listener:(id)arg5 callback:(id /* block */)arg6;
+ (id)new;
+ (double)recommendedAbsoluteCalibrationLevelForVoiceStreams;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithEngine:(id)arg1 streamGroupUUID:(id)arg2 gainMetaParameterDefinition:(id)arg3 mixerDefinition:(id)arg4 source:(id)arg5 listener:(id)arg6 group:(id)arg7 normalize:(bool)arg8 targetLKFS:(id)arg9 calibrationMode:(long long)arg10 level:(double)arg11 outError:(id*)arg12;
- (id)metaParameters;
- (id)metaParametersForStreamUUID:(id)arg1;
- (id)mixer;
- (id)mixers;
- (bool)prepareAndReturnError:(id*)arg1;
- (void)setMetaParameter:(id)arg1 value:(id)arg2;
- (void)setMetaParameter:(id)arg1 value:(double)arg2 withTimeInterval:(double)arg3;
- (id)soundEventForStreamUUID:(id)arg1;
- (bool)startAndReturnError:(id*)arg1;
- (void)stopAndDestroy;
- (void)stopAndInvalidate;
- (void)updateStreamGroupUUID:(id)arg1 streamUUID:(id)arg2 state:(long long)arg3;

@end
