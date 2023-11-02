
@protocol IPGlobalInstallableStateSourceBehavior <NSObject>

@required

- (void)addObserver:(id <IPGlobalInstallableStateSourceBehaviorUpdateObserver>)arg1;
- (void)makeExtantStateSourcesForGlobalSource:(void *)arg1 andEnumerate:(void *)arg2; // needs 2 arg types, found 8: IPGlobalInstallableStateSource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, IPInstallableStateSource *, bool*, void*
- (void)makeInstallingStateSourcesForGlobalSource:(void *)arg1 andEnumerate:(void *)arg2; // needs 2 arg types, found 8: IPGlobalInstallableStateSource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, IPInstallableStateSource *, bool*, void*
- (void)removeObserver:(id <IPGlobalInstallableStateSourceBehaviorUpdateObserver>)arg1;
- (void)serverActionBarrierForTesting;

@end
