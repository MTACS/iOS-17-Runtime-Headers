
@interface SBSAElementContext : NSObject <NSCopying, SAElementIdentifying, SBSABlockMutating> {
    long long  _activeDynamicAnimation;
    NSString * _clientIdentifier;
    bool  _customLayout;
    NSString * _elementIdentifier;
    long long  _interfaceOrientation;
    UIColor * _keyColor;
    long long  _layoutMode;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _preferredEdgeOutsets;
    long long  _systemApertureCustomLayout;
    long long  _systemApertureCustomLayoutCustomAnimationStyle;
    long long  _systemApertureLayoutCustomizingOptions;
}

@property (setter=_setActiveDynamicAnimation:, nonatomic) long long activeDynamicAnimation;
@property (setter=_setClientIdentifier:, nonatomic, copy) NSString *clientIdentifier;
@property (getter=isCustomLayout, setter=_setCustomLayout:, nonatomic) bool customLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (setter=_setElementIdentifier:, nonatomic, copy) NSString *elementIdentifier;
@property (readonly) unsigned long long hash;
@property (setter=_setInterfaceOrientation:, nonatomic) long long interfaceOrientation;
@property (setter=_setKeyColor:, nonatomic, copy) UIColor *keyColor;
@property (setter=_setLayoutMode:, nonatomic) long long layoutMode;
@property (setter=_setPreferredEdgeOutsets:, nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } preferredEdgeOutsets;
@property (readonly) Class superclass;
@property (setter=_setSystemApertureCustomLayout:, nonatomic) long long systemApertureCustomLayout;
@property (setter=_setSystemApertureCustomLayoutCustomAnimationStyle:, nonatomic) long long systemApertureCustomLayoutCustomAnimationStyle;
@property (setter=_setSystemApertureLayoutCustomizingOptions:, nonatomic) long long systemApertureLayoutCustomizingOptions;

+ (id)instanceWithBlock:(id /* block */)arg1;
+ (Class)mutatorClass;

- (void).cxx_destruct;
- (void)_setActiveDynamicAnimation:(long long)arg1;
- (void)_setClientIdentifier:(id)arg1;
- (void)_setCustomLayout:(bool)arg1;
- (void)_setElementIdentifier:(id)arg1;
- (void)_setInterfaceOrientation:(long long)arg1;
- (void)_setKeyColor:(id)arg1;
- (void)_setLayoutMode:(long long)arg1;
- (void)_setPreferredEdgeOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setSystemApertureCustomLayout:(long long)arg1;
- (void)_setSystemApertureCustomLayoutCustomAnimationStyle:(long long)arg1;
- (void)_setSystemApertureLayoutCustomizingOptions:(long long)arg1;
- (long long)activeDynamicAnimation;
- (id)clientIdentifier;
- (id)copyWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)elementIdentifier;
- (unsigned long long)hash;
- (id)initWithSystemApertureElementContext:(id)arg1;
- (long long)interfaceOrientation;
- (bool)isCustomLayout;
- (bool)isEqual:(id)arg1;
- (id)keyColor;
- (long long)layoutMode;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })preferredEdgeOutsets;
- (long long)systemApertureCustomLayout;
- (long long)systemApertureCustomLayoutCustomAnimationStyle;
- (long long)systemApertureLayoutCustomizingOptions;

@end
