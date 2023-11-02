
@interface GPGameMonitorEnvoy : NSObject

+ (bool)applicationIsIdentifiedGame:(id)arg1 info:(id)arg2 entitlements:(id)arg3;
+ (bool)deviceSupportsGamePolicy;
+ (id)gameCategories;
+ (id)shared;
+ (id)sharedInstance;

- (void)_sb_gameDidLaunch:(id)arg1;
- (void)gameDidLaunch:(id)arg1;
- (id)init;

@end
