
@protocol TSUStreamWriteChannel <TSUIOChannel>

@required

- (void)writeData:(void *)arg1 queue:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 10: NSObject<OS_dispatch_data> *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSObject<OS_dispatch_data> *, NSError *, void*

@end
