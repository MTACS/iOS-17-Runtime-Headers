
@interface DDRResetOptions : NSObject <NSSecureCoding> {
    bool  _disallowProximitySetup;
    bool  _eraseDataPlan;
    NSArray * _exclusionPaths;
    bool  _hideProgress;
}

@property (nonatomic) bool disallowProximitySetup;
@property (nonatomic) bool eraseDataPlan;
@property (nonatomic, copy) NSArray *exclusionPaths;
@property (nonatomic) bool hideProgress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)disallowProximitySetup;
- (void)encodeWithCoder:(id)arg1;
- (bool)eraseDataPlan;
- (id)exclusionPaths;
- (bool)hideProgress;
- (id)initWithCoder:(id)arg1;
- (void)setDisallowProximitySetup:(bool)arg1;
- (void)setEraseDataPlan:(bool)arg1;
- (void)setExclusionPaths:(id)arg1;
- (void)setHideProgress:(bool)arg1;

@end
