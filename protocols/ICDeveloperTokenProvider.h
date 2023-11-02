
@protocol ICDeveloperTokenProvider <NSObject>

@required

- (void)fetchDeveloperTokenForClientInfo:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: ICClientInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)invalidateCachedDeveloperTokenForClientInfo:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: ICClientInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
