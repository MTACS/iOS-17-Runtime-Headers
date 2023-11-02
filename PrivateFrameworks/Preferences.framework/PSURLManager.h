
@interface PSURLManager : NSObject {
    PSRootController * _rootController;
    PSSplitViewController * _splitViewController;
    PSListController<PSTopLevelController> * _topLevelController;
}

@property (nonatomic, retain) PSRootController *rootController;
@property (nonatomic, retain) PSSplitViewController *splitViewController;
@property (nonatomic, retain) PSListController<PSTopLevelController> *topLevelController;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_performURLHandlingForController:(id)arg1 dictionary:(id)arg2 items:(id)arg3 controllerNeedsPush:(bool)arg4;
- (id)currentSpecifierIDPath;
- (void)handleDeferredURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 objectOffsetPair:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)handleDeferredURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)keyValueDictionaryForURL:(id)arg1;
- (void)performURLHandlingForController:(id)arg1 dictionary:(id)arg2 items:(id)arg3 controllerNeedsPush:(bool)arg4 withCompletion:(id /* block */)arg5;
- (void)popToRootAndSelectDefaultCategory:(bool)arg1;
- (void)popToRootAndSelectDefaultCategory:(bool)arg1 performWithoutDeferringTransitions:(bool)arg2;
- (void)processURL:(id)arg1 animated:(bool)arg2 fromSearch:(bool)arg3 withCompletion:(id /* block */)arg4;
- (id)rootController;
- (void)setOffsetForController:(id)arg1 fromObjectPair:(id)arg2;
- (void)setRootController:(id)arg1;
- (void)setSplitViewController:(id)arg1;
- (void)setTopLevelController:(id)arg1;
- (id)splitViewController;
- (id)topLevelController;
- (id)urlForCurrentNavStack;

@end
