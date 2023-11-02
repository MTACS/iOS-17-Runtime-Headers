
@protocol SVXClientActivationServicing <NSObject>

@required

- (void)activateWithButtonEvent:(void *)arg1 userInfo:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: SVXButtonEvent *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)activateWithSystemEvent:(void *)arg1 userInfo:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: SVXSystemEvent *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)activateWithText:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)activateWithUserInfo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deactivateWithButtonEvent:(void *)arg1 userInfo:(void *)arg2 options:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: SVXButtonEvent *, NSDictionary *, SVXDeactivationOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)deactivateWithUserInfo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)deactivateWithUserInfo:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: NSDictionary *, SVXDeactivationOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<SVXClientActivationServiceDelegate> *)delegate;
- (void)enqueueButtonEvent:(SVXButtonEvent *)arg1;
- (void)handleButtonEvent:(SVXButtonEvent *)arg1;
- (void)prewarmForSystemEvent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: SVXSystemEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setDelegate:(id <SVXClientActivationServiceDelegate>)arg1;

@end
