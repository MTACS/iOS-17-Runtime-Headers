
@interface STVoiceControlStatusDomainData : NSObject <BSDebugDescriptionProviding, NSSecureCoding, STStatusDomainData, STStatusDomainDataDifferencing> {
    unsigned long long  _listeningState;
    bool  _voiceControlActive;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long listeningState;
@property (readonly) Class superclass;
@property (getter=isVoiceControlActive, nonatomic, readonly) bool voiceControlActive;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataByApplyingDiff:(id)arg1;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)diffFromData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isVoiceControlActive;
- (unsigned long long)listeningState;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
