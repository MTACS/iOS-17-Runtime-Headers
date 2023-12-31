
@interface WBSCyclerCreateBookmarkOperation : NSObject <WBSCyclerContextualOperation>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_createRandomLeafWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_createRandomListWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_randomListWithContext:(id)arg1;
- (void)executeWithContext:(id)arg1 completionHandler:(id /* block */)arg2;

@end
