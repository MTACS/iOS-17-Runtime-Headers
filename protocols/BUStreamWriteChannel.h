
@protocol BUStreamWriteChannel <BUIOChannel>

@required

- (void)flushWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)writeData:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 9: NSObject<OS_dispatch_data> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSObject<OS_dispatch_data> *, NSError *, void*

@end
