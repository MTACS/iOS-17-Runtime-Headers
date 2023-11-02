
@interface PTTestRecipe : NSObject {
    id /* block */  _cleanupBlock;
    PTTestRecipeInfo * _info;
    id /* block */  _invalidationHandler;
    id /* block */  _prepareBlock;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ cleanupBlock;
@property (nonatomic, retain) PTTestRecipeInfo *info;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ prepareBlock;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (void)_activate;
- (void)_deactivate;
- (void)_handleEvent:(long long)arg1;
- (id)_initWithTitle:(id)arg1 prepareBlock:(id /* block */)arg2 cleanupBlock:(id /* block */)arg3;
- (bool)_wantsEvent:(long long)arg1;
- (id /* block */)cleanupBlock;
- (id)info;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id /* block */)prepareBlock;
- (void)setCleanupBlock:(id /* block */)arg1;
- (void)setInfo:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setPrepareBlock:(id /* block */)arg1;
- (id)title;

@end
