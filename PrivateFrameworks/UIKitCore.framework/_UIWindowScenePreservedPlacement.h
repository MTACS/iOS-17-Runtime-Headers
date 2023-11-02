
@interface _UIWindowScenePreservedPlacement : UIWindowScenePlacement {
    bool  _keepInBackground;
}

@property (nonatomic) bool keepInBackground;

+ (unsigned long long)_placementType;

- (id)_createConfigurationWithError:(id*)arg1;
- (id)_init;
- (bool)_preserveLayout;
- (bool)_requestBackground;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)keepInBackground;
- (void)setKeepInBackground:(bool)arg1;

@end
