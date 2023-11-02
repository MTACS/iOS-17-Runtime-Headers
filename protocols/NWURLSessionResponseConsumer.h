
@protocol NWURLSessionResponseConsumer <NSObject>

@required

- (NSURLResponse *)response;
- (void)task:(void *)arg1 deliverData:(void *)arg2 complete:(void *)arg3 error:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NWURLSessionTask *, NSObject<OS_dispatch_data> *, bool, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)task:(void *)arg1 deliverResponse:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NWURLSessionTask *, NSURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*

@end
