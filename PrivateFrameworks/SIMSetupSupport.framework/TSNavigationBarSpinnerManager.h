
@interface TSNavigationBarSpinnerManager : NSObject {
    NSMutableDictionary * _navigationItems;
    NSMutableDictionary * _previousLeftBarButtonItems;
    NSMutableDictionary * _previousRightBarButtonItems;
}

@property (retain) NSMutableDictionary *navigationItems;
@property (retain) NSMutableDictionary *previousLeftBarButtonItems;
@property (retain) NSMutableDictionary *previousRightBarButtonItems;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (id)navigationItems;
- (id)previousLeftBarButtonItems;
- (id)previousRightBarButtonItems;
- (void)setNavigationItems:(id)arg1;
- (void)setPreviousLeftBarButtonItems:(id)arg1;
- (void)setPreviousRightBarButtonItems:(id)arg1;
- (void)startSpinnerInNavigationItem:(id)arg1 withIdentifier:(id)arg2;
- (void)stopSpinnerForIdentifier:(id)arg1;
- (void)stopSpinnerInNavigationItem:(id)arg1 withIdentifier:(id)arg2;

@end
