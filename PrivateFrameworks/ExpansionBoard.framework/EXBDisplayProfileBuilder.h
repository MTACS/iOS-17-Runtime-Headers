
@interface EXBDisplayProfileBuilder : NSObject <EXBDisplayProfileConfiguring> {
    unsigned long long  _deactivationReasons;
    EXBMutableDisplayTransformDescriptor * _descriptor;
    unsigned long long  _priorityLevel;
    FBSSceneSpecification * _sceneSpecification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)deactivationReasonsWhenActive;
- (void)deriveWithIdentifier:(id)arg1;
- (id)descriptor;
- (unsigned long long)displayPriority;
- (id)init;
- (id)sceneSpecification;
- (void)setCloningSupported:(bool)arg1;
- (void)setDeactivationReasonsWhenActive:(unsigned long long)arg1;
- (void)setMainLike:(bool)arg1;
- (void)setPriorityLevel:(unsigned long long)arg1 sceneSpecification:(id)arg2;
- (void)validate;

@end
