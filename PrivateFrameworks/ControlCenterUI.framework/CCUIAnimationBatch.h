
@interface CCUIAnimationBatch : NSObject {
    NSUUID * _UUID;
    NSMutableDictionary * _animationsByParameters;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;

- (void).cxx_destruct;
- (id)UUID;
- (void)addAnimation:(id)arg1;
- (id)init;
- (void)iterateAnimationsOfType:(Class)arg1 withBlock:(id /* block */)arg2;
- (void)iterateAnimationsWithBlock:(id /* block */)arg1;

@end
