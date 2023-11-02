
@interface WBSCyclerCreateTabOperation : NSObject <WBSCyclerContextualOperation>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_createRandomTabGroupWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_createRandomTabWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)executeWithContext:(id)arg1 completionHandler:(id /* block */)arg2;

@end
