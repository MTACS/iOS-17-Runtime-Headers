
@protocol NWURLSessionRequestBodyProvider <NSObject>

@required

- (void)close;
- (long long)countOfBytesSent;
- (void)readMinimumIncompleteLength:(void *)arg1 maximumLength:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_dispatch_data> *, bool, NSError *, void*

@end
