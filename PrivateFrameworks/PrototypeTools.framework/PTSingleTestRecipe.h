
@interface PTSingleTestRecipe : PTTestRecipe {
    id /* block */  _action;
}

@property (nonatomic, copy) id /* block */ action;

+ (id)recipeWithTitle:(id)arg1 action:(id /* block */)arg2;
+ (id)recipeWithTitle:(id)arg1 prepareBlock:(id /* block */)arg2 action:(id /* block */)arg3 cleanupBlock:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)_handleEvent:(long long)arg1;
- (bool)_wantsEvent:(long long)arg1;
- (id /* block */)action;
- (void)invalidate;
- (void)setAction:(id /* block */)arg1;

@end
