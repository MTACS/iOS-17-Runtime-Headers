
@interface PTDoubleTestRecipe : PTTestRecipe {
    id /* block */  _decreaseAction;
    id /* block */  _increaseAction;
}

@property (nonatomic, copy) id /* block */ decreaseAction;
@property (nonatomic, copy) id /* block */ increaseAction;

+ (id)recipeWithTitle:(id)arg1 increaseAction:(id /* block */)arg2 decreaseAction:(id /* block */)arg3;
+ (id)recipeWithTitle:(id)arg1 prepareBlock:(id /* block */)arg2 increaseAction:(id /* block */)arg3 decreaseAction:(id /* block */)arg4 cleanupBlock:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)_handleEvent:(long long)arg1;
- (bool)_wantsEvent:(long long)arg1;
- (id /* block */)decreaseAction;
- (id /* block */)increaseAction;
- (void)invalidate;
- (void)setDecreaseAction:(id /* block */)arg1;
- (void)setIncreaseAction:(id /* block */)arg1;

@end
