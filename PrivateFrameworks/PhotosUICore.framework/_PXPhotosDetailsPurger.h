
@interface _PXPhotosDetailsPurger : NSObject {
    NSHashTable * _allViewControllers;
    NSPointerArray * _lastUsedViewControllers;
}

+ (id)sharedPurger;

- (void).cxx_destruct;
- (void)_purgeAllViewControllers;
- (void)detailsViewControllerDidAppear:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)init;
- (void)purgeOldViewControllers;

@end
