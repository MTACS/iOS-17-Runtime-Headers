
@interface STUIStatusBarSystemNavigationAction : STUIStatusBarAction {
    unsigned long long  _destination;
}

@property (nonatomic) unsigned long long destination;

+ (id)_navigationActionForDestination:(unsigned long long)arg1;
+ (id)backNavigationAction;
+ (id)forwardNavigationAction;

- (unsigned long long)destination;
- (void)setDestination:(unsigned long long)arg1;

@end
