
@interface PSNavBarSpinnerManager : NSObject {
    NSMutableDictionary * _savedRecords;
}

+ (id)sharedSpinnerManager;

- (void).cxx_destruct;
- (id)init;
- (void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2;
- (void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2 hideBackButton:(bool)arg3;
- (void)stopAnimatingForIdentifier:(id)arg1;

@end
