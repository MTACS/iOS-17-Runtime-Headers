
@interface INCExtensionManager : NSObject {
    NSMutableDictionary * _extensions;
    NSMutableDictionary * _killTimers;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (void)initialize;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_killExtensionWithBundleIdentifier:(id)arg1;
- (void)_manageExtension:(id)arg1 requestIdentifier:(id)arg2;
- (void)_resetKillTimerForExtensionWithBundleIdentifier:(id)arg1;
- (void)fetchExtensionForIntent:(id)arg1 extensionInputItems:(id)arg2 requiresTCC:(bool)arg3 completion:(id /* block */)arg4;
- (void)fetchExtensionForIntent:(id)arg1 extensionInputItems:(id)arg2 requiresTCC:(bool)arg3 requiresTrustCheck:(bool)arg4 completion:(id /* block */)arg5;
- (id)init;
- (bool)isExtensionLoadedForExtensionBundleIdentifier:(id)arg1;
- (void)killExtension:(id)arg1 requestIdentifier:(id)arg2 afterTimeout:(double)arg3;

@end
