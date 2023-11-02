
@protocol PSSpecifierDataSource <NSObject>

@required

+ (id)sharedInstance;

- (void)addObserver:(id <PSSpecifierObserver>)arg1;
- (void)removeObserver:(id <PSSpecifierObserver>)arg1;
- (NSArray *)specifiersForSpecifier:(PSSpecifier *)arg1 observer:(id <PSSpecifierObserver>)arg2;

@end
