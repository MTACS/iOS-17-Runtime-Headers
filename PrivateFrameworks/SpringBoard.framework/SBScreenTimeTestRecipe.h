
@interface SBScreenTimeTestRecipe : NSObject <SBTestRecipe>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_setApplicationBundleIdentifiers:(id)arg1 blockedForScreenTimeExpiration:(bool)arg2;

- (id)_defaultIdentifiers;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)title;

@end
