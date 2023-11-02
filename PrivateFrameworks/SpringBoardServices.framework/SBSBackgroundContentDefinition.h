
@interface SBSBackgroundContentDefinition : NSObject <BSDescriptionProviding, BSXPCCoding> {
    NSString * _clientBundleIdentifier;
    NSString * _sceneIdentifier;
}

@property (nonatomic, readonly, copy) NSString *clientBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *sceneIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clientBundleIdentifier;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithSceneIdentifier:(id)arg1 clientBundleIdentifier:(id)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (id)sceneIdentifier;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
