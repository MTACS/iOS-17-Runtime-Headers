
@interface SBSwitcherDemoFilteringController : NSObject {
    NSArray * _hiddenApplicationBundleIDs;
    NSHashTable * _observers;
}

@property (nonatomic, copy) NSArray *hiddenApplicationBundleIDs;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)hiddenApplicationBundleIDs;
- (void)removeObserver:(id)arg1;
- (void)setHiddenApplicationBundleIDs:(id)arg1;

@end
