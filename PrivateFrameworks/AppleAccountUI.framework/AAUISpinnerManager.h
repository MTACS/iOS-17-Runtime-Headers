
@interface AAUISpinnerManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _controllersLock;
    UINavigationItem * _navItem;
    NSMutableDictionary * _spinnerControllers;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithNavigationItem:(id)arg1;
- (void)startNavigationSpinner;
- (void)startSpinnerInSpecifier:(id)arg1 forKey:(id)arg2;
- (void)stopAllSpinners;
- (void)stopAnimatingForKey:(id)arg1;
- (void)stopNavigationSpinner;

@end
