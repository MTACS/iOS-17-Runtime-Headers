
@interface HFNaturalLightingActionBuilder : HFActionBuilder {
    HMLightProfile * _lightProfile;
    bool  _naturalLightEnabled;
}

@property (nonatomic, retain) HMLightProfile *lightProfile;
@property (nonatomic) bool naturalLightEnabled;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (bool)canUpdateWithActionBuilder:(id)arg1;
- (id)commitItem;
- (id)compareToObject:(id)arg1;
- (id)containedAccessoryRepresentables;
- (id)copyForCreatingNewAction;
- (id)createNewAction;
- (id)description;
- (bool)hasSameTargetAsAction:(id)arg1;
- (unsigned long long)hash;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)lightProfile;
- (bool)naturalLightEnabled;
- (id)performValidation;
- (void)setLightProfile:(id)arg1;
- (void)setNaturalLightEnabled:(bool)arg1;
- (bool)updateWithActionBuilder:(id)arg1;
- (id)validationError;

@end
