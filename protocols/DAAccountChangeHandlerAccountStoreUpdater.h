
@protocol DAAccountChangeHandlerAccountStoreUpdater <NSObject>

@required

- (void)addAccount:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)removeAccount:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updateAccount:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
