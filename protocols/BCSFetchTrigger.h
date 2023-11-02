
@protocol BCSFetchTrigger <NSObject>

@required

- (void)scheduleFetchBlock:(void *)arg1; // needs 1 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_xpc_object> *, unsigned long long, id /* block */, void*, void, id /* block */, bool, NSError *, void*, void*
- (void)triggerFetchForReason:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
