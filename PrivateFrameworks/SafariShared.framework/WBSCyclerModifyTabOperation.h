
@interface WBSCyclerModifyTabOperation : NSObject <WBSCyclerContextualOperation>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_modifyRandomTabGroupWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_modifyRandomTabInTabGroup:(id)arg1 withContext:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_updateTitleOfTab:(id)arg1 withContext:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_updateURLOfTab:(id)arg1 withContext:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)executeWithContext:(id)arg1 completionHandler:(id /* block */)arg2;

@end
