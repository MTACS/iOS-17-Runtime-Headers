
@interface UIWindowScenePlacement : NSObject <BSDebugDescriptionProviding, NSCopying>

@property (nonatomic, readonly) bool _preserveLayout;
@property (nonatomic, readonly) bool _requestBackground;
@property (nonatomic, readonly) bool _requestCenterSlot;
@property (nonatomic, readonly) bool _requestFullscreen;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_default;
+ (unsigned long long)_placementType;

- (id)_createConfigurationWithError:(id*)arg1;
- (id)_init;
- (bool)_preserveLayout;
- (bool)_requestBackground;
- (bool)_requestCenterSlot;
- (bool)_requestFullscreen;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
