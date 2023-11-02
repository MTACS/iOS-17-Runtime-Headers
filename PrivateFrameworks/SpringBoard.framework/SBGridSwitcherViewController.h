
@interface SBGridSwitcherViewController : SBFluidSwitcherViewController <SBFSpringLoadedInteractionBehaviorDelegate, SBFSpringLoadedInteractionEffectDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_setupSpringLoadingSupport;
- (id)targetItemForSpringLoadingInteractionInView:(id)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2 forDropSession:(id)arg3;
- (id)targetViewForSpringLoadingEffectForView:(id)arg1;
- (void)viewDidLoad;

@end
