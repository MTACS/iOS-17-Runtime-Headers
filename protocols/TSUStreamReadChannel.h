
@protocol TSUStreamReadChannel <NSObject>

@required

- (void)close;
- (void)readWithQueue:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 9: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSObject<OS_dispatch_data> *, NSError *, void*

@end
