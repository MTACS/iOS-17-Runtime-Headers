
@interface HDSessionAssertionGroup : NSObject {
    NSMutableSet * _allAssertions;
    NSMutableDictionary * _assertionsForState;
    long long  _state;
}

@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)setupState:(long long)arg1 withAssertions:(id)arg2;
- (long long)state;
- (void)transitionToState:(long long)arg1;

@end
