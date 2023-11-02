
@protocol UserIdentifyIntentHandling <NSObject>

@required

- (void)handleUserIdentify:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: UserIdentifyIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UserIdentifyIntentResponse *, void*
- (void)handleUserIdentify:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: UserIdentifyIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UserIdentifyIntentResponse *, void*
- (void)resolveIdentityForUserIdentify:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: UserIdentifyIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UserIdentifyIdentityResolutionResult *, void*
- (void)resolveIdentityForUserIdentify:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: UserIdentifyIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UserIdentifyIdentityResolutionResult *, void*

@optional

- (void)confirmUserIdentify:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: UserIdentifyIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UserIdentifyIntentResponse *, void*
- (void)confirmUserIdentify:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: UserIdentifyIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UserIdentifyIntentResponse *, void*

@end
