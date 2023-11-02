
@interface SBSystemApertureDynamicsTestRecipe : NSObject <SBTestRecipe> {
    unsigned long long  _activeDynamics;
    <SAInvalidatable> * _animationAssertion;
    NSArray * _dynamicsDescriptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dynamicsDescriptions;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)title;

@end
