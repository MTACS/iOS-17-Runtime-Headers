
@protocol RUIServerHook <NSObject>

@required

- (<RUIServerHookDelegate> *)delegate;
- (void)processElement:(void *)arg1 attributes:(void *)arg2 objectModel:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: RUIElement *, NSDictionary *, RUIObjectModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)processObjectModel:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: RUIObjectModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setDelegate:(id <RUIServerHookDelegate>)arg1;
- (bool)shouldMatchElement:(RUIElement *)arg1;
- (bool)shouldMatchModel:(RUIObjectModel *)arg1;

@optional

- (void)harvestDataFromResponse:(NSHTTPURLResponse *)arg1;
- (RUIObjectModel *)objectModel;
- (RUIServerHookResponse *)serverHookResponse;
- (void)setObjectModel:(RUIObjectModel *)arg1;
- (void)setServerHookResponse:(RUIServerHookResponse *)arg1;

@end
