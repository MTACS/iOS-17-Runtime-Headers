
@interface TRASettingsAmbientPresentation : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    TRAArbitrationAmbientPresentationInputs * _ambientPresentationInputs;
}

@property (nonatomic, readonly) TRAArbitrationAmbientPresentationInputs *ambientPresentationInputs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)ambientPresentationInputs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithAmbientPresentationInputs:(id)arg1;
- (id)initWithAmbientPresentationSettings:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAmbientPresentationSettings:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
