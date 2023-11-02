
@interface STMediaStatusDomainCameraCaptureAttribution : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    STActivityAttribution * _activityAttribution;
    STMediaStatusDomainCameraDescriptor * _cameraDescriptor;
}

@property (nonatomic, readonly, copy) STActivityAttribution *activityAttribution;
@property (nonatomic, readonly, copy) STMediaStatusDomainCameraDescriptor *cameraDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityAttribution;
- (id)cameraDescriptor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCameraDescriptor:(id)arg1 activityAttribution:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
