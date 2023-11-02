
@interface UISScenePreservedPlacementConfiguration : UISScenePlacementConfiguration {
    bool  _keepInBackground;
}

@property (nonatomic) bool keepInBackground;

+ (unsigned long long)placementType;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)keepInBackground;
- (void)setKeepInBackground:(bool)arg1;

@end
