
@interface WBSCyclerMoveTabOperation : NSObject <WBSCyclerContextualOperation>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_randomTabGroupInContext:(id)arg1 requireTabs:(bool)arg2 notIntersecting:(id)arg3;
- (void)executeWithContext:(id)arg1 completionHandler:(id /* block */)arg2;

@end
