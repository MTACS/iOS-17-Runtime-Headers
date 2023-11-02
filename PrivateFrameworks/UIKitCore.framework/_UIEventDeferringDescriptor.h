
@interface _UIEventDeferringDescriptor : NSObject <BSDebugDescriptionProviding, NSCopying> {
    bool  _compatibility;
    NSString * _displayHardwareIdentifier;
    BKSHIDEventDeferringEnvironment * _environment;
    unsigned int  _predicateContextID;
    NSString * _predicateSceneIdentityString;
    void * _predicateWindowPointer;
    unsigned long long  _scope;
    unsigned int  _targetContextID;
    int  _targetPID;
    NSString * _targetSceneIdentityString;
    void * _targetWindowPointer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
