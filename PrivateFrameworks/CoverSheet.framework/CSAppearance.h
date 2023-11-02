
@interface CSAppearance : NSObject <BSDescriptionProviding, CSAppearanceProviding, NSCopying> {
    NSMutableSet * _components;
    NSString * _identifier;
    _UILegibilitySettings * _legibilitySettings;
    bool  _transitional;
}

@property (nonatomic, readonly, copy) NSString *appearanceIdentifier;
@property (nonatomic, copy) NSSet *components;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (readonly) Class superclass;
@property (getter=isTransitional, nonatomic) bool transitional;

+ (id)appearanceForProvider:(id)arg1;
+ (id)appearanceWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)addComponent:(id)arg1;
- (id)appearanceIdentifier;
- (id)componentForType:(long long)arg1 identifier:(id)arg2;
- (id)componentForType:(long long)arg1 property:(unsigned long long)arg2;
- (id)components;
- (void)conformsToCSAppearanceProviding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)flagForComponentType:(long long)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAppearance:(id)arg1;
- (bool)isTransitional;
- (id)legibilitySettings;
- (void)removeAllComponentsWithIdentifier:(id)arg1;
- (void)removeComponent:(id)arg1;
- (void)reset;
- (void)setComponents:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setTransitional:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)unionAppearance:(id)arg1;

@end
