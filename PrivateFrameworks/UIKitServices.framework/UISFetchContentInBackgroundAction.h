
@interface UISFetchContentInBackgroundAction : BSAction

- (long long)UIActionType;
- (id)initWithHandler:(id /* block */)arg1;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (void)sendResponse:(id)arg1;

@end
