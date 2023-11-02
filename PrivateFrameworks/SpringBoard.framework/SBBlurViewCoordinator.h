
@interface SBBlurViewCoordinator : NSObject {
    NSArray * _elementVCs;
    NSMutableDictionary * _mapStateToBlocks;
    unsigned long long  _state;
}

@property (getter=isBlurred, nonatomic, readonly) bool blurred;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) NSArray *viewControllers;

- (void).cxx_destruct;
- (void)_fireBlocksForState:(unsigned long long)arg1;
- (void)_setState:(unsigned long long)arg1;
- (void)addNotifyBlock:(id /* block */)arg1 forState:(unsigned long long)arg2;
- (id)description;
- (id)init;
- (id)initWithElementViewControllers:(id)arg1;
- (bool)isBlurred;
- (void)removeNotifyBlock:(id /* block */)arg1 forState:(unsigned long long)arg2;
- (void)setBlurred:(bool)arg1 withAnimationFactory:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)state;
- (id)viewControllers;

@end
