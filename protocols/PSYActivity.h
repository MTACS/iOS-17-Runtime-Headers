
@protocol PSYActivity <NSObject>

@required

- (oneway void)abortSyncWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)beginSyncWithOptions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: PSYSyncOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
