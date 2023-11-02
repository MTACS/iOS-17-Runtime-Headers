
@protocol CUMessaging <NSObject>

@required

- (void)deregisterEventID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deregisterRequestID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (void)registerEventID:(void *)arg1 options:(void *)arg2 eventHandler:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 16: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSDictionary *, NSDictionary *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)registerRequestID:(void *)arg1 options:(void *)arg2 requestHandler:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 30: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSDictionary *, NSDictionary *, id /* block */, void*, void, id /* block */, NSDictionary *, NSDictionary *, NSError *, id /* block */, void*, void, id /* block */, NSError *, void*, void*, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)sendEventID:(void *)arg1 eventMessage:(void *)arg2 options:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendRequestID:(void *)arg1 requestMessage:(void *)arg2 options:(void *)arg3 responseHandler:(void *)arg4; // needs 4 arg types, found 11: NSString *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, NSError *, void*
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg1;

@end
