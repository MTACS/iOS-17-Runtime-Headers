
@protocol OSASyncProxyServices <NSObject>

@required

- (void)deliver:(NSString *)arg1 tasking:(NSString *)arg2 taskId:(NSString *)arg3 fromBlob:(NSData *)arg4;
- (void)listDevices:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)request:(void *)arg1 logList:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)request:(void *)arg1 logListWithOptions:(void *)arg2 onComplete:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)request:(void *)arg1 transferGroupWithOptions:(void *)arg2 onComplete:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)request:(void *)arg1 transferLog:(void *)arg2 onComplete:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)request:(void *)arg1 transferLog:(void *)arg2 withOptions:(void *)arg3 onComplete:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)requestProxyMetadata:(void *)arg1 onComplete:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)synchronize:(void *)arg1 withOptions:(void *)arg2 onComplete:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*

@end
