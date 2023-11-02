
@interface SBSAElementContextMutator : NSObject {
    SBSAElementContext * _systemApertureElementContext;
}

@property (nonatomic) long long activeDynamicAnimation;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (getter=isCustomLayout, nonatomic) bool customLayout;
@property (nonatomic, copy) NSString *elementIdentifier;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic, copy) UIColor *keyColor;
@property (nonatomic) long long layoutMode;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } preferredEdgeOutsets;
@property (nonatomic) long long systemApertureCustomLayout;
@property (nonatomic) long long systemApertureCustomLayoutCustomAnimationStyle;
@property (nonatomic, readonly) SBSAElementContext *systemApertureElementContext;
@property (nonatomic) long long systemApertureLayoutCustomizingOptions;

- (void).cxx_destruct;
- (long long)activeDynamicAnimation;
- (id)clientIdentifier;
- (id)description;
- (id)elementIdentifier;
- (id)initWithSystemApertureElementContext:(id)arg1;
- (long long)interfaceOrientation;
- (bool)isCustomLayout;
- (id)keyColor;
- (long long)layoutMode;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })preferredEdgeOutsets;
- (void)setActiveDynamicAnimation:(long long)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setCustomLayout:(bool)arg1;
- (void)setElementIdentifier:(id)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setKeyColor:(id)arg1;
- (void)setLayoutMode:(long long)arg1;
- (void)setPreferredEdgeOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSystemApertureCustomLayout:(long long)arg1;
- (void)setSystemApertureCustomLayoutCustomAnimationStyle:(long long)arg1;
- (void)setSystemApertureLayoutCustomizingOptions:(long long)arg1;
- (long long)systemApertureCustomLayout;
- (long long)systemApertureCustomLayoutCustomAnimationStyle;
- (id)systemApertureElementContext;
- (long long)systemApertureLayoutCustomizingOptions;

@end
