
@interface TRAUserInterfaceStyleResolutionPolicyInfo : NSObject <BSDescriptionProviding, NSCopying> {
    TRASettingsActuationContext * _actuationContext;
}

@property (nonatomic, copy) TRASettingsActuationContext *actuationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actuationContext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithActuationContext:(id)arg1;
- (void)setActuationContext:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
