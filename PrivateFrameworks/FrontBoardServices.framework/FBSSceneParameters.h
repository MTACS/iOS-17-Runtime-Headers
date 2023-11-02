
@interface FBSSceneParameters : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSMutableCopying> {
    FBSSceneClientSettings * _clientSettings;
    FBSSceneSettings * _settings;
    FBSSceneSpecification * _specification;
}

@property (nonatomic, copy) FBSSceneClientSettings *clientSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) FBSSceneSettings *settings;
@property (nonatomic, readonly, copy) FBSSceneSpecification *specification;
@property (readonly) Class superclass;

+ (id)parametersForSpecification:(id)arg1;

- (void).cxx_destruct;
- (id)clientSettings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithParameters:(id)arg1;
- (id)initWithSpecification:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setClientSettings:(id)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;
- (id)specification;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateSettingsWithBlock:(id /* block */)arg1;

@end
