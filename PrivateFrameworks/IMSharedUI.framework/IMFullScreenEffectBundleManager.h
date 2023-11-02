
@interface IMFullScreenEffectBundleManager : NSObject {
    NSString * _bundleDirectory;
    NSDictionary * _fullScreenMomentBundles;
}

@property (nonatomic, retain) NSString *bundleDirectory;
@property (nonatomic, readonly) NSDictionary *fullScreenMomentBundles;

+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;
+ (id)effectIdentifiersInPickerOrder;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)bundleDirectory;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)effectBundleForIdentifier:(id)arg1;
- (id)fullScreenMomentBundles;
- (id)fullScreenMomentForIdentifier:(id)arg1;
- (bool)hasFullScreenMomentForIdentifier:(id)arg1;
- (id)init;
- (bool)loadAllBundlesFromPath:(id)arg1 bundles:(id*)arg2 error:(id*)arg3;
- (id)loadEffectBundle:(id)arg1 error:(id*)arg2;
- (id)localizedDisplayNameForEffectWithIdentifier:(id)arg1;
- (id)localizedStringForKey:(id)arg1 fromBundleWithIdentifier:(id)arg2;
- (void)setBundleDirectory:(id)arg1;
- (id)triggeredFullScreenEffectForType:(id)arg1;

@end
