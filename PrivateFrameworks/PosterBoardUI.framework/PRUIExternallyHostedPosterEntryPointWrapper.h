
@interface PRUIExternallyHostedPosterEntryPointWrapper : NSObject <BSDescriptionProviding, PRUIExternallyHostedPosterEditingRequest> {
    <PRUIModalEntryPoint> * _entryPoint;
    NSUUID * _requestUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) <PRUIModalEntryPoint> *entryPoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *requestUUID;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (id)wrapperWithEntryPoint:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithEntryPoint:(id)arg1 requestUUID:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)entryPoint;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)requestUUID;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
