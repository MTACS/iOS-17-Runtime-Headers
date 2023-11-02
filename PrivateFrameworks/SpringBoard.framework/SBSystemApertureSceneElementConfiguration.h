
@interface SBSystemApertureSceneElementConfiguration : NSObject <BSDescriptionProviding, NSCopying> {
    bool  _allowsSceneReactivation;
    bool  _entersBackgroundWhenBacklightIsOff;
    double  _maximumHeight;
    bool  _minimalPresentationPossible;
}

@property (nonatomic) bool allowsSceneReactivation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool entersBackgroundWhenBacklightIsOff;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maximumHeight;
@property (getter=isMinimalPresentationPossible, nonatomic) bool minimalPresentationPossible;
@property (readonly) Class superclass;

- (bool)allowsSceneReactivation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)entersBackgroundWhenBacklightIsOff;
- (id)init;
- (bool)isMinimalPresentationPossible;
- (double)maximumHeight;
- (void)setAllowsSceneReactivation:(bool)arg1;
- (void)setEntersBackgroundWhenBacklightIsOff:(bool)arg1;
- (void)setMaximumHeight:(double)arg1;
- (void)setMinimalPresentationPossible:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
