
@protocol MDSearchQueryResultProcessor

@required

- (void)didFinishWithError:(NSError *)arg1;
- (void)didReturnResults:(void *)arg1 resultsData:(void *)arg2 oidData:(void *)arg3 protectionClass:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 9: long long, NSData *, NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
