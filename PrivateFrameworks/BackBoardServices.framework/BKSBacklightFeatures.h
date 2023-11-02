
@interface BKSBacklightFeatures : NSObject <BSProtobufSerializable> {
    bool  _disableFeatures;
    float  _fixedBrightnessLevelWhileDisabled;
    float  _fixedBrightnessNitsWhileDisabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableFeatures;
@property (nonatomic) float fixedBrightnessLevelWhileDisabled;
@property (nonatomic) float fixedBrightnessNitsWhileDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)protobufSchema;

- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)didFinishProtobufDecodingWithError:(out id*)arg1;
- (bool)disableFeatures;
- (float)fixedBrightnessLevelWhileDisabled;
- (float)fixedBrightnessNitsWhileDisabled;
- (id)init;
- (void)setDisableFeatures:(bool)arg1;
- (void)setFixedBrightnessLevelWhileDisabled:(float)arg1;
- (void)setFixedBrightnessNitsWhileDisabled:(float)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
