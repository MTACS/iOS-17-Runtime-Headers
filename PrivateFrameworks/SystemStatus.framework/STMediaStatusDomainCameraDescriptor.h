
@interface STMediaStatusDomainCameraDescriptor : NSObject <BSDebugDescriptionProviding, NSCopying, NSSecureCoding> {
    NSString * _cameraIdentifier;
    bool  _eligibleForPrivacyIndicator;
}

@property (nonatomic, readonly, copy) NSString *cameraIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEligibleForPrivacyIndicator, nonatomic, readonly) bool eligibleForPrivacyIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cameraIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCameraIdentifier:(id)arg1;
- (id)initWithCameraIdentifier:(id)arg1 eligibleForPrivacyIndicator:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEligibleForPrivacyIndicator;
- (bool)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
