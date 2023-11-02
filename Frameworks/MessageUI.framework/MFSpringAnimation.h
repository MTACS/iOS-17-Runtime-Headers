
@interface MFSpringAnimation : CASpringAnimation

@property (nonatomic, retain) MFSpringAnimationDelegate *delegate;

+ (id)springAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;

- (void)addCompletionBlock:(id /* block */)arg1;
- (id)init;

@end
