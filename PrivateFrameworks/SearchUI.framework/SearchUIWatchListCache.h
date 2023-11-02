
@interface SearchUIWatchListCache : TLKAsyncCache

- (void)computeObjectForKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getButtonsForWatchListIdentifier:(id)arg1 type:(int)arg2 isHorizontallySrollingStyle:(bool)arg3 completion:(id /* block */)arg4;
- (id)init;

@end
