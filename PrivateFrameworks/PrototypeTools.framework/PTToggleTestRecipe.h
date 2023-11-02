
@interface PTToggleTestRecipe : PTTestRecipe {
    bool  _on;
    id /* block */  _toggleAction;
}

@property (getter=isOn, nonatomic, readonly) bool on;
@property (nonatomic, copy) id /* block */ toggleAction;

+ (id)recipeWithTitle:(id)arg1 prepareBlock:(id /* block */)arg2 toggleAction:(id /* block */)arg3 cleanupBlock:(id /* block */)arg4;
+ (id)recipeWithTitle:(id)arg1 toggleAction:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_activate;
- (void)_deactivate;
- (void)_handleEvent:(long long)arg1;
- (bool)_wantsEvent:(long long)arg1;
- (void)invalidate;
- (bool)isOn;
- (void)setToggleAction:(id /* block */)arg1;
- (id /* block */)toggleAction;

@end
