
@interface PHASEMixerParameters : NSObject {
    NSMutableDictionary * _parameters;
}

@property (nonatomic, readonly) NSDictionary *parameterDictionary;

- (void).cxx_destruct;
- (void)addAmbientMixerParameters:(id)arg1 listener:(id)arg2;
- (void)addAmbientMixerParametersWithIdentifier:(id)arg1 listener:(id)arg2;
- (void)addSpatialMixerParameters:(id)arg1 source:(id)arg2 listener:(id)arg3;
- (void)addSpatialMixerParametersWithIdentifier:(id)arg1 source:(id)arg2 listener:(id)arg3;
- (id)init;
- (id)parameterDictionary;

@end
