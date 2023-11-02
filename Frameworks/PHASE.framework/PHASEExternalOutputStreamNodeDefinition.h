
@interface PHASEExternalOutputStreamNodeDefinition : PHASEGeneratorNodeDefinition {
    unsigned int  _channelLayoutTag;
    bool  _normalize;
    NSNumber * _targetLKFS;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) unsigned int channelLayoutTag;
@property (nonatomic) bool normalize;
@property (nonatomic, retain) NSNumber *targetLKFS;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)new;

- (void).cxx_destruct;
- (unsigned int)channelLayoutTag;
- (id)init;
- (id)initWithExternalOutputStreamUUID:(id)arg1 mixerDefinition:(id)arg2 channelLayoutTag:(unsigned int)arg3 uid:(id)arg4;
- (bool)normalize;
- (void)setNormalize:(bool)arg1;
- (void)setTargetLKFS:(id)arg1;
- (id)targetLKFS;
- (id)uuid;

@end
