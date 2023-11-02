
@interface STCallingStatusDomainCallDescriptor : NSObject <BSDebugDescriptionProviding, NSSecureCoding> {
    STActivityAttribution * _callProviderAttribution;
    unsigned long long  _callState;
    unsigned long long  _callType;
    unsigned long long  _copresenceActivityType;
}

@property (nonatomic, readonly, copy) STActivityAttribution *callProviderAttribution;
@property (nonatomic, readonly) unsigned long long callState;
@property (nonatomic, readonly) unsigned long long callType;
@property (nonatomic, readonly) unsigned long long copresenceActivityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)audioCallDescriptorWithState:(unsigned long long)arg1;
+ (id)copresenceCallDescriptorWithActivityType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)videoCallDescriptorWithState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)callProviderAttribution;
- (unsigned long long)callState;
- (unsigned long long)callType;
- (unsigned long long)copresenceActivityType;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCallType:(unsigned long long)arg1 callState:(unsigned long long)arg2 copresenceActivityType:(unsigned long long)arg3;
- (id)initWithCallType:(unsigned long long)arg1 callState:(unsigned long long)arg2 copresenceActivityType:(unsigned long long)arg3 callProviderAttribution:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
